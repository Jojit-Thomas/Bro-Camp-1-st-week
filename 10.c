#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of array ");
    scanf("%d",&size);
    int array1[size];
    int array2[size];
    int tempArr[size];

// ********INPUTING ARRAYS **********
    printf("Enter the values of array 1 : ");
    for(int i = 0; i < size; i++){
        scanf("%d",&array1[i]);
    }
    printf("Enter the values of array 2 : ");
    for(int j = 0; j < size; j++){
        scanf("%d",&array2[j]);
    }

// ********SWAPPING ARRAYS **********
    for(int index = 0; index < size; index++){
        tempArr[index] = array1[index];
        array1[index] = array2[index];
        array2[index] = tempArr[index];
    }

// ********PRINTING ARRAYS **********
    for(int k = 0; k < size; k++){
        printf("%d ",array1[k]);
    }
    printf("\n");
    for(int y = 0; y < size; y++){
        printf("%d ",array2[y]);
    }

    // printArray(array1, size);
    return 0;
}


