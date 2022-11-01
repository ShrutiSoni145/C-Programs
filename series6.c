#include<stdio.h>
void main(){
int i,n,p;
n=5;
p=1;
for(i=1;i<7;i++){
    n*=p;
    printf("%d,",n);
    p+=0.5;
}
}
