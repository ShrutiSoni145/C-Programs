#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
//int i;
char s[50];
int n;
float f;
FILE *fp;
fp=fopen("abc.txt","w");//1.for reading data into file.
                            //2. if file does not exist,it won't be created.,and would give NULL to fp.
                            //3. if file exist, its contents will come to the console..
if(fp==NULL)
    exit(0);
printf("Enter data:\n");
//scanf("%c",&s);
gets(s);
scanf("%d%f",&n,&f);
//fputs(s,fp);

/*while(1){
    s=fgetc(fp);
    if(feof(fp))
        break;
    printf("%c",s);
}*/
fprintf(fp,"%s%d%f",s,n,f);
fclose(fp);
}
