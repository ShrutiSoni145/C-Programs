#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int count(FILE *p);
void main(){
FILE *fp;
fp=fopen("abc.txt","r");
if(fp==NULL)            //The path Of the file should be the same with the path of the program file, otherwise fopen will return NULL.
    exit(0);

printf("\nCount space=%d\n",count(fp));
}
int count(FILE *p){
char s;
int c=0;
/*FILE *p;
p=fopen("abc.txt","r");
if(p==NULL)
    exit(0);*/
while(1){
  s=fgetc(p);
  printf("%c",s);
  if(s==32)
        c++;
  if(feof(p))
    break;
}
fclose(p);
return c;
}
