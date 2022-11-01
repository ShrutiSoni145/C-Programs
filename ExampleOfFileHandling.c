#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
int i;
char s[10];
FILE *fp;
fp=fopen("Example.txt","w");//1.for writing data into file.
                            //2. if file does not exist,it will be created.
                            //3. if file exist, its contents are overwritten.
if(fp==NULL)
    exit(0);
printf("Enter string:\n");
gets(s);
for(i=0;i<strlen(s);i++)
    fputc(s[i],fp);
fclose(fp);
}
