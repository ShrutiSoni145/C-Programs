#include<stdio.h>
int convert(int d);
void main(){
int d;
printf("Enter any decimal value:\n");
scanf("%d",&d);
convert(d);
}
int convert(int d){
//int b[20];
//int i=0;
if(d==1){
        return 1;

}
else
{
    printf("%d",(convert(d/2)%2));
    return d;
}
}
