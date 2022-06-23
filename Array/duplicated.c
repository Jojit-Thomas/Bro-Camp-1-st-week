#include<stdio.h>

int main()
{
    int size;
    int flag = 0;
    printf("Enter the size of the array");
    scanf("%d", &size);
    int array[size];
    int duplicatedArray[size];
    printf("Enter the values of the array ");
    for (int inputIndex = 0; inputIndex < size; inputIndex++)
    {
    scanf("%d", &array[inputIndex]);
    }
    printf("\n\n");
    for (int arrayIndex = 0; arrayIndex < size - 1; arrayIndex++)
    {
        for (int compareIndex = arrayIndex + 1; compareIndex < size ; compareIndex++)
        {
            if (array[arrayIndex] == array[compareIndex])
            {
                duplicatedArray[flag] = array[compareIndex];
                flag ++;

            }
            
        }
        
    }
    printf("Number of duplicated elements : %d", flag);
    // ******************** Printing Array ********************
    printf("\n\n");
    for (int printIndex = 0; printIndex < flag; printIndex++)
    {
        printf("Duplicated Elements are %d\t", duplicatedArray[printIndex]);
    }
    
    
}