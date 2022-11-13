#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{
    //START WITH THE INPUT ON OPENING
    //NEEDS TO BE POSITIVE INT AND ONLY 1 INT AS THE INPUT
    //NEEDS TO LOOP BACK IF ITS AN ERROR

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //THEN WE NEED TO TAKE THAT KEY THAT WAS INPUT

    int key = atoi(argv[1]);

    //GET AN INPUT OF PLAINTEXT

    string plain = get_string("plaintext:  ");
    printf("ciphertext: ");

    //ADD THE KEY AMOUNT TO THE LETTERS ASCII IN THE PLAINTEXT

    for (int x = 0; x < strlen(plain); x++)
    {
        if (isupper(plain[x]))
        {
            //OUTPUT THE CIPHER MESSAGE IN SCRAMBLED FORM
            printf("%c", (plain[x] - 65 + key) % 26 + 65);
        }
        else if (islower(plain[x]))
        {
            //OUTPUT THE CIPHER MESSAGE IN SCRAMBLED FORM
            printf("%c", (plain[x] - 97 + key) % 26 + 97);
        }
        else
        {
            //OUTPUT THE CIPHER MESSAGE IN SCRAMBLED FORM
            printf("%c", plain[x]);
        }

    }
    printf("\n");

}
