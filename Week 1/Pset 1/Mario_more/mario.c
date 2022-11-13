#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //For the input

    int height;
    do
    {
        height = get_int("Height :");
    }
    while (height < 1 || height > 8);

    //Printing the rows of #

    int x, y, dot;

    for (x = 0; x < height; x++)
    {
        for (dot = 0; dot < height - x - 1; dot++)
        {
            printf(" ");
        }
        for (y = 0; y <= x; y++)
        {
            printf("#");
        }

        //This print is just for the spaces
        printf("  ");

        for (y = 0; y <= x; y++)
        {
            printf("#");
        }
        printf("\n");
    }
}