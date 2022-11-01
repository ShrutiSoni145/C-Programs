#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
int i;
char s;
int count=0;
FILE *fp1,*fp2;
fp1=fopen("Example.txt","r");//1.for reading data into file.
fp2=fopen("E2.txt","w");                             //2. if file does not exist,it won't be created.,and would give NULL to fp.
                            //3. if file exist, its contents will come to the console..
if(fp1==NULL)
    exit(0);
/*printf("Enter data:\n");
scanf("%c",&s);
fputc(s,fp);*/

while(1){
    s=fgetc(fp1);
    if(feof(fp1))
        break;
    printf("%c",s);
    fputc(s,fp2);
}
//printf("count=%d\n",count);
fclose(fp1);
fclose(fp2);
}
