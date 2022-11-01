#include<stdio.h>
float floating(float);
void main(){
float x,result;
printf("Enter any floating variable:\n");
scanf("%f",&x);
result=floating(x);
printf("Result = %f",result);
}
float floating(float x){
int n,i;
float y=1.0;
printf("Enter integer value:\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
    y=y*x;
}
return y;
}
