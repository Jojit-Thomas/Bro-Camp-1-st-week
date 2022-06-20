#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of array");
    scanf("%d",&size);
    int array[size];
    int oddTerms = 0;
    printf("Enter the values of the array  ");
    // ******************** Getting the values from the user into array ********************
    for (int iterator = 0; iterator < size; iterator++)
    {
        scanf("%d",&array[iterator]);
    }
    // ******************** Checking is the number odd and increment the number of odd numbers ********************
    for (int i = 0; i < size; i++)
    {
        if(i%2 == 0){
            oddTerms ++;
        }
    }
    printf("Number of odd Terms = %d", oddTerms);
    
    
}