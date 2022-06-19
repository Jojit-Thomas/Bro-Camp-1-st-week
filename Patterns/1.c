
//  *
//* * *
//  +
//  +
//* * * * *
//  +
//  +
//  +
//* * * * * * *
//  +
//  +
//  +
//  +
//* * * * * * * * *

#include<stdio.h>

int main()
{
    int limit = 4;
    int colLimit = 3;
    for(int row = 1; row <= limit; row++){
        for(int rowStar = 1; rowStar <= row  ; rowStar++){
            printf("  +");
            printf("\n");
        }
        
        for(float col = 1 ; col <= colLimit ; col++){
            printf("* ");
        }
        colLimit += 2;
        printf("\n");
    }
    
    return 0 ; 
}
