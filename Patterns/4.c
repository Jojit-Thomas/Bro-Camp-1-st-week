//    1

//   232

//  34543

// 4567654

//567898765   

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

        int sub = 0;

        for (int col = row; col < row + ( 2 * row - 1 ); col++)

        {            

            if (row * 2 -1 < col)

            {

                sub = sub + 2;

                int ans = col - sub;

                printf("%d", ans);

                //printf("%d", sub);

                    

            } else

            {

                printf("%d", col);

            }

            

        }

        printf("\n");

    }

    return 0;

}
