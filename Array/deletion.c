#include<stdio.h>

int main()
{
    int size;
    int deleteIndex;
    printf("Enter the size of array : ");
    scanf("%d",&size);
    int array[size];
    // ******************** Getting the input from the user into array ********************
    for (int iterator = 0; iterator < size; iterator++)
    {
        scanf("%d",&array[iterator]);
    }
    printf("Enter the Index of deletion");
    scanf("%d",&deleteIndex);
    // ******************** Deleting Array ********************
    for (int delteLoop = array[deleteIndex]; delteLoop < size; delteLoop++)
    {
        array[deleteIndex] = array[deleteIndex + 1];
    }
    // ******************** Printing Array ********************
    for (int arrayIndex = 0; arrayIndex < size - 1 ; arrayIndex++)
    {
        printf("%d",array[arrayIndex]);
    }
    
    
    
}