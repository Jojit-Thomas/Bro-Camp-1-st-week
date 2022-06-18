#include<stdio.h>

int main()
{
    int limit = 4;
    for(int row = 0; row <= limit; row ++){
        for(float rowStar = 1; rowStar <= row  ; rowStar += 0.5){
            // printf("%f",rowStar);
            printf("*");
            printf("\n");
        }
        
        for(float col = 1; col <= row ; col += 0.5){
            printf("* ");
        }
        printf("\n");
    }
}


// #include<stdio.h>

// int main()
// {
//     int row = 4;
//     for(int i = 1; i <= row; i++){
//         for(int space = 1; space <= row-i; space++)
//         {
//             printf(" ");
//         }
//         for(float col= 1 ; col <=i;col+=0.5    ){
//             printf("*");
//         }
    
//     printf("\n");
    
//     }
    
    
//     return 0;
// }