#include<stdio.h>
void prime(int *);
void main(){
int a[10];
int i;
printf("Enter elements of array:\n");
for(i=0;i<10;i++){
    scanf("%d",&a[i]);
}
printf("The elements of array are:\n");
for(i=0;i<10;i++){
    printf("%d\n",a[i]);
}
prime(a);
}
void prime(int *p){
int i,j;
printf("Prime numbers in array are:\n");
for(i=0;i<10;i++){
    for(j=2;j<*(p+i);j++){
        if(*(p+i)%j!=0){
            continue;

        }
        else{
            break;
        }
    }
    if(j==*(p+i)){
    printf("%d\n",*(p+i));
    }
}
}
