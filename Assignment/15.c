// ******************** Functions ********************

#include <stdio.h>

void getArray();
void displayArray();
void main()
{
    int s, a[20];
    printf("Enter size of array: ");
    scanf("%d", &s);
    getArray(s, a);
    displayArray(s, a);
}

void getArray(int size, int ar[20])
{
    printf("Enter array Elements: \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &ar[i]);
    }
}

void displayArray(int size, int array[20])
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d", array[i]);
    }

}