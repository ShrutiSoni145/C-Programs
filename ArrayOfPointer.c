#include<stdio.h>
void main(){
int i,a[5],*p[5];
printf("Enter values:\n");
for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    p[i]=&a[i];
}
printf("The elements of array:\n");
for(i=0;i<5;i++){
    printf("%d\n",*p[i]);
}
}
