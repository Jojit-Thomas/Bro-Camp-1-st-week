#include <stdio.h>
int main()
{
    int row, limit = 3, space, star;
    for (row = 1; row <= limit; row++)
    {
        for (space = 1; space <= limit; space++)
        {
            if (row == 3)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        for (star = 1; star <= row; star++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (row = 1; row <= limit - 1; row++)
    {
        for (space = 1; space <= row; space++)
        {
            printf(" ");
        }
        for (star = 1; star <= limit - row; star++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}