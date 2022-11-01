#include<stdio.h>
#define max 30
void main(){
int i,j,n,at[max],bt[max],wt[max],tat[max],ct[max],c=0,ebt[max];
int CT,q;
float awt=0,atat=0;
printf("Enter number of processes:\n");
scanf("%d",&n);
printf("Enter arrival time:\n");
for(i=0;i<n;i++)
    scanf("%d",&at[i]);
printf("Enter burst time:\n");
for(i=0;i<n;i++){
    scanf("%d",&bt[i]);
    ebt[i]=bt[i];
}
printf("Enter quantum\n");
scanf("%d",&q);
CT=0;
ct[0]=0;
printf("process\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\tCompletion time\n");
for(j=0;j<10;j++){
    for(i=0;i<n;i++){
    if(bt[i]==0){
        continue;
    }
    if(bt[i]<q){
        CT=CT+bt[i];
        bt[i]=0;
    }else{
        CT=CT+q;
        bt[i]=bt[i]-q;
    }
    if(bt[i]==0){
        ct[i+1]=CT;
        c++;
    }

}
if(c==n){
    break;
}
}
for(i=0;i<n;i++){
    wt[i]=0;
    tat[i]=0;
    tat[i]=ct[i+1]-at[i];
    wt[i]=tat[i]-ebt[i];
    awt=awt+wt[i];
    atat=atat+tat[i];
    printf("%d\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,at[i],ebt[i],wt[i],tat[i],ct[i+1]);

}
awt=awt/n;
atat=atat/n;
printf("Average waiting time=%f\nAverage turnaround time=%f\n",awt,atat);
}
