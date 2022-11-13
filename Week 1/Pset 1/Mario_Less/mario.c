#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    //This is printing the row to 'n'
    for (int row = 0; row < n; row++)
    {
        //Need to put the dots in
        for (int dots = 0; dots < n - row - 1; dots++)
        {
            printf(" ");
        }
        //This will be for adding the next hashes in the row to form the pyramid shape
        for (int column = 0; column <= row; column++)
        {
            printf("#");
        }
        printf("\n");
    }
}
