#include <stdio.h>

int main()
{
    int size;
    int sum = 0;
    printf("Enter the size of the array");
    scanf("%d", &size);
    int array[size];
    printf("Enter the values of the array");
    for (int input = 0; input < size; input++)
    {
        scanf("%d", &array[input]);
    }
    for (int iterate = 0; iterate < size; iterate++)
    {
        sum += array[iterate];
    }
    int average = sum/size;
    printf("%d",average);
}