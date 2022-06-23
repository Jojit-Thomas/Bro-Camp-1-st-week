#include<stdio.h>

int main()
{
    int size;
    printf("Enter a number");
    scanf("%d",&size);
    for (int row = 1; row <= size; row++)
    {
        for (int col = 1; col <= size; col++)
        {
            if(col == row || row + col == size + 1 ){
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
        
    }
    
}
