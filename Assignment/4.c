// ******************** Pass or Fail ********************
#include<stdio.h>

int main()
{
    float mark;
    printf("Enter the mark ");
    scanf("%f",&mark);
    if(mark >= 50){
        printf("*** Passed ***");
    }
    else{
        printf("!!! failed !!!");
    }
    return 0;
}