//   ___      _        _   _            ___          _   
//  / __| ___| |___ __| |_(_)___ _ _   / __| ___ _ _| |_ 
//  \__ \/ -_) / -_) _|  _| / _ \ ' \  \__ \/ _ \ '_|  _|
//  |___/\___|_\___\__|\__|_\___/_||_| |___/\___/_|  \__|
                                                      


#include<stdio.h>

int main()
{
    int size;
    int temp = 0;
    printf("Enter the size of an array");
    scanf("%d",&size);
    int arr[size];
    for(int i = 0; i < size; i++){
        scanf("%d",&arr[i]);
    }
    for (int j = 0; j < size; j++)
    {
        for (int k = j + 1; k < size ; k++)
        {
            if(arr[j] > arr[k]){
                temp = arr[j];
                arr[j] = arr[k];
                arr[k] = temp;
            }
        }
        
    }
    for(int y = 0; y < size; y++){
        printf("%d, ",arr[y]);
    }
    
    return 0;
}
