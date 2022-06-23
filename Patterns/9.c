#include <stdio.h>

int main()
{
    int limit = 10;
    for (int row = 0; row < limit; row++)
    {
        for (int col = 0; col < row; col++)
        {
            printf("*");
        }
        if (row > limit / 2)
        {

            for (int col2 = 0; col2 < limit - row; col2++)
            {
                printf("*");
            }
        }
        printf("\n");
    }
}