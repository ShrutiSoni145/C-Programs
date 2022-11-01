#include<stdio.h>
int convert(int d);
void main(){
int d;
printf("Enter any decimal value:\n");
scanf("%d",&d);
printf("Binary value of %d is:\n",d);
printf("%d",(convert(d)%2));
}
int convert(int d){
    if(d==1)
        return 1;

    printf("%d",(convert(d/2)%2));
    //printf("%d",d%2);
    return d;
}
