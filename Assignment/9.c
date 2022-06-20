#include<stdio.h>

int main()
{
    int limit = 5;
    int row;
    int col;
    for(row = 1; row <= limit; row++){
        for(col = 1; col <= row; col++){
            printf("%d ",col);
        }
        printf("\n");
    }
    return 0;
}