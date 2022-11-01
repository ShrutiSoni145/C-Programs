#include<stdio.h>
void convertDecimalToBinary(int);
void main(){
int decimal=15;
convertDecimalToBinary(decimal);
}
void convertDecimalToBinary(int d){
int B[10];
int i;
for(i=0;i<=10;i++){
while(d==0||d==1){
    B[i]=d%2;
    d=d/2;
}
}
//printf("%d",i);
for(i=0;i<=10;i++){
    printf("%d",B[i]);
}

}
