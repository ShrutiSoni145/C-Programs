#include<stdio.h>
void main(){
int r;
float area,volume, pi=3.14;
printf("enter the radius :");
scanf("%d",&r);
area=4*pi*r*r;
printf("area= %f \n",area);
volume=(4*pi*r*r*r)/3;
printf("volume = %f\n",volume);

}
