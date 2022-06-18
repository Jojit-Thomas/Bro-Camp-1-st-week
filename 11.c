#include<stdio.h>

int main()
{   
    int size;
    int noOfEven = 0;
    printf("Enter the size of an array ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the values of array");
    for(int i = 0; i <= size; i++){
        scanf("%d",&arr[i]);
    }
    for(int j = 0; j< size; j++){
        if(arr[j]%2 == 0){
            noOfEven += 1;
        }
    }
    printf("%d",noOfEven);


}