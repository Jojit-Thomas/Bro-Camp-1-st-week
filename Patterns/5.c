//     *
//    * *
//   *   *
//  *     *
// *********

#include <stdio.h>

int main()
{
    int limit = 5;
    for (int row = 1; row <= limit; row++)
    {
        for (int space = 1; space <= limit - row; space++)
        {
            printf(" ");
        }

        for (int col = 1; col <= 2 * row - 1; col++)
        {
            if (col == 1 || col == 2 * row - 1)
            {
                printf("*");
            }
            else if (row == limit)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            // printf("%d",row);
        }
        printf("\n");
    }
}
