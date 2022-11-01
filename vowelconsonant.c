#include<stdio.h>
#include<string.h>
void count(char *p){
int vowel=0,consonant=0;
int i,alphabet=0;

while(*p!='\0'){
    if((*p>=65&&*p<=90)||(*p>=97&&*p<=122)){
        alphabet++;
    }
    i=65;
    while(i<=117){
        if(*p==i){
            vowel++;
        }
        if(i==65||i==69||i==97||i==101){
            i+=4;
        }else if(i==85){
        i+=12;
        }else{
        i+=6;
        }

    }
    p++;
}
printf("%d\n",alphabet);
consonant=alphabet-vowel;
printf("Vowel are:%d\n",vowel);
printf("consonants are:%d\n",consonant);
}
void main(){
char s[20];
printf("Enter string:\n");
gets(s);
count(s);
}
