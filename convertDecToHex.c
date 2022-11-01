#include<stdio.h>
void DecToHex(int n);
void main(){
int number;
printf("Enter any number:\n");
scanf("%d",&number);
DecToHex(number);
}
void DecToHex(int n){
int h[10];
int i=0;
while(n!=0){
    h[i]=n%16;
    n/=16;
    i++;
}
printf("Hexadecimal values:\n");
for(i=i-1;i>=0;i--){
    if(h[i]>=10){
        h[i]+=55;
        printf("%c",h[i]);
    }
    else
        printf("%d",h[i]);
}
}
