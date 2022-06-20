#include<stdio.h>
#include<stdbool.h>

int main()
{
    int size;
    int searchValue;
    bool found = false;
    printf("Enter the size of array");
    scanf("%d",&size);
    int array[size];
    printf("Enter the values of the array ");
    // ******************** Getting the values from user into array ********************
    for (int inputIndex = 0; inputIndex < size; inputIndex++)
    {
        scanf("%d",&array[inputIndex]);
    }

    printf("Enter the Seach value");
    scanf("%d",&searchValue);
    // ******************** Checking is the array contains search value ********************
    for (int searchIndex = 0; searchIndex < size; searchIndex++)
    {
        if(array[searchIndex] == searchValue){
            found = true;
            printf("The number %d is found at Index %d",searchValue,searchIndex);
        } 
    }
    if(found == false){
         printf("The number %d is not found in the array ", searchValue);
    }
    
}
