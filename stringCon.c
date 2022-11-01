#include<stdio.h>
void concatenate(char *p,char *q);
void main(){
char a[20],b[20];
printf("Enter string 1:\n");
gets(a);
printf("Enter string 2:\n");
gets(b);
concatenate(a,b);
printf("concatenate string: %s\n",a);
}
void concatenate(char *p,char *q){
while(*p!='\0'){
p++;
}
while(*q!='\0'){
    *p=*q;
    p++;
    q++;
}
*q='\0';
}
