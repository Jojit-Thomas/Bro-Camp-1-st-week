#include<stdio.h>

int main()
{
    int size;
    int insertValue;
    int insertIndex;
    printf("Enter the size of the array");
    scanf("%d",&size);
    int array[50];
    // ******************** Getting the value from the user into array ********************
    for (int inputIndex = 0; inputIndex < size; inputIndex++)
    {
        scanf("%d",&array[inputIndex]);
    }

    printf("Enter the value to be inserted");
    scanf("%d", &insertValue);

    printf("Enter the index to be inserted");
    scanf("%d", &insertIndex);

    // ******************** Inserting Array ********************
    for (int insertLoopIndex = size ; insertLoopIndex >= insertIndex; insertLoopIndex--)
    {
        array[insertLoopIndex + 1 ] = array[insertLoopIndex];
    }
    array[insertIndex] = insertValue;
    
    // ******************** Printing Array ********************
    for (int printIndex = 0; printIndex < size + 1; printIndex++)
    {
        printf("%d ", array[printIndex]);
    }
    
}
