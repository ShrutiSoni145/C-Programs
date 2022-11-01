#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
//int i;
char s;
FILE *fp;
fp=fopen("Example.txt","r");//1.for reading data into file.
                            //2. if file does not exist,it won't be created.,and would give NULL to fp.
                            //3. if file exist, its contents will come to the console..
if(fp==NULL)
    exit(0);
while(1){
    s=fgetc(fp);
    if(feof(fp))
        break;
    printf("%c",s);
}
fclose(fp);
}
