//    *
//   ***
//  *****
// *******


#include<stdio.h>

int main()
{
    int row = 4;
    for(int i = 1; i <= row; i++){
        for(int space = 1; space <= row-i; space++)
        {
            printf(" ");
        }
        for(float col= 1 ; col <=i;col+=0.5    ){
            printf("*");
        }
    
    printf("\n");
    
    }
    
    
    return 0;
}