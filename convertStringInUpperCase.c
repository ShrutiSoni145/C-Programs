#include<stdio.h>
void convert(char *);
void main(){
char s[5];
printf("Enter string:\n");
gets(s);
convert(s);
}
void convert(char *t){
while(*t!='\0'){
        if((*t>=65)&&(*t<=90)){
            printf("%c",*t);
        }
        else{
            *t-=32;
            printf("%c",*t);
        }
    t++;
}
}
