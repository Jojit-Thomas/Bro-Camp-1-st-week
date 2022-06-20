//     1 
//    1 1
//   1 2 1
//  1 2 3 1
// 1 2 3 4 1

#include<stdio.h>

int main()
{
    int limit = 5;
    for(int row = 1; row <= limit; row++){
        for (int space = 0; space < limit - row; space++)
        {
            printf(" ");
        }
        
        for (int col = 1; col <= row; col++)
        {
            if(col == row){
                printf("1 ");
            } else{
                printf("%d ",col );
            }
        }
        printf("\n");
        
    }
}