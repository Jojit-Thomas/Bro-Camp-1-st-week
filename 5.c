#include <stdio.h>
#include<stdlib.h>

int main()
{
    float percentage;
    printf("Enter the Percentage");
    scanf("%f", &percentage);

    if (percentage > 90)
    {
        printf("You obtained A grade");
    }
    else if (percentage >= 80)
    {
        printf("You obtained B grade");
    }
    else if (percentage >= 70)
    {
        printf("You obtained C grade");
    }
    else if (percentage >= 60)
    {
        printf("You obtained D grade");
    }
    else if (percentage >= 50)
    {
        printf("You obtained E grade");
    }
        return 0;
}


