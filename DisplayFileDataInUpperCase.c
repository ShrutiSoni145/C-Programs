#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
int i;
char c;
char s[30];
FILE *fp;
fp=fopen("Example.txt","w");
printf("Enter String:\n");
gets(s);
i=0;
while(i<strlen(s)){
    fputc((s[i]-32),fp);
    i++;
}

fp=fopen("Example.txt","r");//1.for reading & writing.
                            //2. if file does not exist,it won't be created. and fopen would return NULL.

if(fp==NULL)
    exit(0);
while(1){
    c=fgetc(fp);
    if(feof(fp))
        break;
    printf("%c",(c-32));
}
fclose(fp);
}
