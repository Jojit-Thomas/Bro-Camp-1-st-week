#include <stdio.h>
int main(){
    int a[50];
    int i,numb,size,posi;
    printf("Enter the array size");
scanf("%d",&size);
printf("Enter the numbers to be inserted in to the array");
for(i=0;i<size;i++){
scanf("%d",&a[i]);
}
printf("Enter the number to be inserted");
scanf("%d",&numb);
printf("Enter the position to be insered");
scanf("%d",&posi);
// for(i=size-1;i>posi-1;i--){
//     a[i]=a[i];}
//     a[posi-1]=numb;
//     size++;
//     printf("%d",a[i]);

for(i=index-1;i <= size;i++){
    a[i]=a[i+1];
}

for (int iterate = 0; iterate < size; iterate++)
{
    printf("%d",a[i]);
}
return 0;
}
