#include<stdio.h>
void main(){
int i,n;
float s=564;
printf("how many values of the series you want to print:\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("%f,",s);
s=s/2;
}
}
