#include<stdio.h>


int main()
{
    int inp;
    char *a[] = {"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    scanf("%d",&inp);
    if(inp <= 7 && inp != 0){
    printf("%s", a[inp - 1]);
    } else {
        printf("Invalid Entry");
    }
    
  
    return 0;
}