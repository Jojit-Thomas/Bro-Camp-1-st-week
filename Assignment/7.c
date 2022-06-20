// ******************** Multiplication Table ********************

#include<stdio.h>

int main()
{
    int inp;
    int i;
    printf("Enter a Number");
    scanf("%d",&inp);
    for(i=1; i <= 10; i++){
        printf("%d x %d = %d\n",inp, i, inp*i);
    }
    return 0;
}