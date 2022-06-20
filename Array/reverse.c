#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of the array");
    scanf("%d", &size);
    int array[size];
    printf("Enter the values of the array");
    // ******************** Getting the input from the user into array ********************
    for (int inputIndex = 0; inputIndex < size; inputIndex++)
    {
        scanf("%d", &array[inputIndex]);
    }
    // ******************** Reversing array using temp variable ********************
    for (int reversingIndex = 0; reversingIndex < size / 2; reversingIndex++)
    {
        int temp = array[reversingIndex];
        array[reversingIndex] = array[size - reversingIndex - 1];
        array[size - reversingIndex - 1] = temp;
    }
    // ******************** Printing Array ********************
    for (int printIndex = 0; printIndex < size; printIndex++)
    {
        printf("%d ", array[printIndex]);
    }
    
}
