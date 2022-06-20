// ******************** Selection sort ********************
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array ");
    scanf("%d", &size);
    int array[size];
    // ******************** Getting input from user into array ********************
    for (int inputIndex = 0; inputIndex < size; inputIndex++)
    {
        scanf("%d", &array[inputIndex]);
    }
    // ******************** Sorting Array ********************
    for (int sortIndex = 0; sortIndex < size - 1; sortIndex++)
    {
        for (int nestedSortIndex = 1; nestedSortIndex < size; nestedSortIndex++)
        {
            if (array[sortIndex] > array[sortIndex + 1])
            {
                int temp = array[sortIndex];
                array[sortIndex] = array[sortIndex + 1];
                array[sortIndex + 1] = temp;
            }
        }
    }
    // ******************** Printing Array ********************
    for (int printIndex = 0; printIndex < size; printIndex++)
    {
        printf("%d ", array[printIndex]);
    }
}