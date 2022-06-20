#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array ");
    scanf("%d", &size);
    int array1[size];
    int array2[size];
    int mergedArray[size * 2];
    printf("Enter the values of array 1 : ");
    // ******************** Getting the value into array1 ********************
    for (int inputIndex1 = 0; inputIndex1 < size; inputIndex1++)
    {
        scanf("%d", &array1[inputIndex1]);
    }
    // ******************** Getting the value into array2 ********************
    printf("Enter the values of array 2 : ");
    for (int inputIndex2 = 0; inputIndex2 < size; inputIndex2++)
    {
        scanf("%d", &array2[inputIndex2]);
    }
    // ******************** Merging array1 to mergedArray ********************
    for (int mergeIndex1 = 0; mergeIndex1 < size; mergeIndex1++)
    {
        mergedArray[mergeIndex1] = array1[mergeIndex1];
    }
    // ******************** Merging array2 to mergedArray ********************
    for (int mergeIndex2 = 0; mergeIndex2 < size; mergeIndex2++)
    {
        mergedArray[mergeIndex2 + size] = array2[mergeIndex2];
    }
    // ******************** Printing Array ********************
    for (int printIndex = 0; printIndex < size * 2; printIndex++)
    {
        printf("%d ", mergedArray[printIndex]);
    }
    
}
