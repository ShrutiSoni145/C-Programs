#include<stdio.h>
//#include<stdlib.h>
void main(){
int i,n,s=1;
float sum=0;
printf("how many values of the series you want to prints:\n");
scanf("%d",&n);
//if(n<=13&&n>=0){
for(i=1;i<=n;i++){
sum=sum+1/s;
s++;
}
printf("sum of the %d elements of the series:%f",n,sum);
}/*
else{
    printf("you have entered wrong value to print the series");
    exit(0);
}*/
