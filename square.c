#include<stdio.h>
float square(int n);
void main(){
int num;
printf("Enter number:\n");
scanf("%d",&num);
printf("square root of %d = %f. ",num,square(num));

}
float square(int n){
float a;
int e=n;
float d=0.1;
int i=0;
while(e!=0){
    for(a=1;a<e/2;a++){
        if(a*a==e){
            break;
        }
    }
    if(a*a==e){
        break;
    }
    e-=1;
}
while(i<5){
    while(a*a<=n){
        a+=d;
    }
    a-=d;
    d/=10;
    i++;
}
return a;
}
