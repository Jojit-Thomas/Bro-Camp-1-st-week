// Pascal rank Pattern
#include <stdio.h>

int main()
{
    int limit = 10;
    for (int row = 1; row <= limit; row++)
    {
        for (int space = 0; space < limit - row; space++)
        {
            printf(" ");
        }

        for (int col = 1; col <= row; col++)
        {
            // if (col == row || col == 0)
            // {
            //     printf("1 ");
            // }
            // else
            // {
                int num = ((col - 1) + (col ));
                printf("%d ", num);
            // }
        }
        printf("\n");
    }
}