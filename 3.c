// simple interest calculator

#include<stdio.h>

int main()
{
    int P;
    float R;
    float N;
    float SI;
    printf("Enter the data \n\n Principal amount | Interest Rate | Numer of Years ");
    scanf("%d%f%f",&P,&R,&N);
    SI = (P*R*N)/100;
    printf("%f",SI);
    return 0;
}