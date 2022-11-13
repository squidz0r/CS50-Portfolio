#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>


int count_letters(string l);
int count_words(string w);
int count_sentences(string s);

int main(void)
{
    string text = get_string("Text: ");
    int letter_count = count_letters(text);
    int word_count = count_words(text);
    int sentence_count = count_sentences(text);

    // CALCULATIONS

    float calculation = (0.0588 * letter_count / word_count * 100) - (0.296 * sentence_count / word_count * 100) - 15.8;
    int grade = round(calculation);

    //MAKING THE PRINTING RULES

    if (grade < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %i\n", grade);
        return 0;
    }
}


// CALCULATIONS FOR COUNTING LETTERS, WORDS AND SENTENCES TO PUT IN FORMULA

int count_letters(string l)
{
    int length = strlen(l);
    int count_l = 0;

    for (int il = 0; il < length; il++)
        if (isalpha(l[il]))
        {
            count_l ++;
        }
    return count_l;
}

int count_words(string w)
{
    int length = strlen(w);
    int count_w = 1;

    for (int iw = 0; iw < length; iw++)
        if (isspace(w[iw]))
        {
            count_w ++;
        }
    return count_w;
}

int count_sentences(string s)
{
    int length = strlen(s);
    int count_s = 0;

    for (int is = 0; is < length; is++)
        if (s[is] == '.' || s[is] == '!' || s[is] == '?')
        {
            count_s ++;
        }
    return count_s;
}