#include<stdio.h>
void main(){
int i,n,p=1;
char c='D';
printf("how many values of the series you want to print:\n");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("%c,",c);
c+=p;
p++;
}
}
