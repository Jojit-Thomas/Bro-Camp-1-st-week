#include<stdio.h>
int main(){
int a[100];
int i,size,index;
printf("Enter limit");
scanf("%d",&size);
printf("Enter numbers");
for(i=0;i<size;i++){
    scanf("%d",&a[i]);}
    printf("enter number for deletion ");
    scanf("%d",&index);
for(i=index-1;i <= size;i++){
    a[i]=a[i+1];
}
for(int k=0;k<size-1;k++){
printf("%d",a[k]);}
return 0;
}