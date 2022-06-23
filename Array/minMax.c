#include <stdio.h>

int main()
{
    int size;
    int nthsize;
    printf("Enter the size of the array ");
    scanf("%d", &size);
    int array[size];
    for (int input = 0; input < size; input++)
    {
        scanf("%d", &array[input]);
    }
    for (int iteration = 0; iteration < size - 1; iteration++)
    {
        for (int loop2 = iteration + 1; loop2 < size; loop2++)
        {
            if (array[iteration] > array[loop2])
            {
                int temp = array[iteration];
                array[iteration] = array[loop2];
                array[loop2] = temp;
                // printf("%d \t", array[iteration]);
            }
        }
    }
    printf("\n");
    printf("Enter the nth smallest number");
    scanf("%d",&nthsize);
    printf("nth smallest number is : %d ", array[nthsize]);
    // ******************** Printing Array ********************
    // for (int printIndex = 0; printIndex < size; printIndex++)
    // {
    //     printf("%d ", array[printIndex]);
    // }
}
