#include<stdio.h>
int convert(int d);
void main(){
int d;
printf("Enter any decimal:\n");
scanf("%d",&d);
printf("octal value of %d is:\n",d);
printf("%d",convert(d)%8);
}
int convert(int d){
    if(d<8){
        return d;
    }
    printf("%d",convert(d/8)%8);
    return d;
}


