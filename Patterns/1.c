#include<stdio.h>

int main()
{
    for(float col = 0; col < 3 ; col+=0.5){
            printf("* ");
        }

        printf("\n\n\n\n\n\n");

    int limit = 4;

    for(int row = 2; row <= limit; row++){
        for(int rowStar = 1; rowStar <row  ; rowStar++){
            printf("  *");
            printf("\n");
        }

        for(float col = 1; col <= row ; col+=0.5){
            printf("* ");
        }
        printf("\n");
    }
    
    return 0 ; 
}