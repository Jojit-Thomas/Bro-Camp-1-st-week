// * * * * * 
// *
// *
// * * *
// *
// *
// * * * * *
// *
// *
// * * *
// *
// *
// * * * * *

#include <stdio.h>

int main()
{
    int limit = 5;
    int colLimit = 3;
    int rowLimit = 2;
    int count = 2;
    for (int row = 0; row < limit; row++)
    {
        if (row % 2 == 0)
        {
            colLimit += 2;
            for (int colStar = 0; colStar < colLimit; colStar++)
            {
                printf("* ");
            }
        }
        else
        {
            colLimit -= 2;
            for (int colStar = 0; colStar < colLimit; colStar++)
            {
                printf("* ");
            }
        }

        printf("\n");
        for (int rowStar = 0; rowStar < rowLimit; rowStar++)
        {
            if(row == limit -1){
                break;
            }
            printf("* ");
            printf("\n");
        }
    }
}
