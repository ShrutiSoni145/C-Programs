#include<stdio.h>
void FindSquareRoot(int);
void main(){
int num;
printf("Enter the number:\n");
scanf("%d",&num);
FindSquareRoot(num);
}
void FindSquareRoot(int num){
float squareRoot;
squareRoot=num/2;
printf("square root=%f",squareRoot);

}
