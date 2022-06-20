#include<stdio.h>

int main()
{
    int arraySize = 0;
    printf("Enter the size of arrays");
    scanf("%d",&arraySize);
    int array1[arraySize][arraySize];
    for (int row = 0; row < arraySize; row++)
    {
        for (int col = 0; col < arraySize; col++)
        {
            scanf("%d",&array1[row][col]);
        }
        
    }
    for (int rowPrint = 0; rowPrint < arraySize; rowPrint++)
    {
        for (int colPrint = 0; colPrint < arraySize; colPrint++)
        {
            printf("%d\t",array1[rowPrint][colPrint]);
        }
        printf("\n");
        
    }
    
}

