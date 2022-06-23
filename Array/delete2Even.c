#include<stdio.h>

int main()
{
     int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    int array[size * 2];
    int oddTerms = 0;
    printf("Enter the values of the array  ");
    // ******************** Getting the values from the user into array ********************
    for (int iterator = 0; iterator < size; iterator++)
    {
        scanf("%d",&array[iterator]);
    }
    printf("\n %d \n",array[4]);
    // ******************** Checking is the number odd and increment the number of odd numbers ********************
    for (int i = 0; i < size; i++)
    {
        if(array[i]%2 == 1){
            for (int delteIndex = i; delteIndex < size; delteIndex++)
            {
                array[i + 1] = array[i + 2];
                int index = 4;
                printf("\n %d \n",array[index]);
                printf("%d \t",delteIndex);
            }
            // i--;
        } else {
            printf("0 ");
        }
    } 
    // ******************** Printing Array ********************
    for (int arrayIndex = 0; arrayIndex < size ; arrayIndex++)
    {
        printf("%d, ",array[arrayIndex]);
    }
    // printf("Number of odd Terms = %d", oddTerms);
}
