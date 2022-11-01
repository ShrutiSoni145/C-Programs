#include<stdio.h>
#define max 30
void main(){
int i,j,n,at[max],bt[max],wt[max],tat[max],ct[max],q=2,c=0,ebt[max];
int k,check;
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
ct[0]=0;
printf("process\tArrival Time\tBurst Time\tWaiting Time\tTurnaround Time\tCompletion time\n");
for(j=0;j<10;j++){
        check=0;
for(i=0;i<n;i++){
    if(bt[i]==0){
        continue;
    }
    check++;
    if(j>1&&check==1){
            for(k=n-1;k>=0;k--){
                if(bt[k]!=0){
                    break;
                }
            }
    }
    if(bt[i]<q){
        if(j>1&&check==1)
            ct[i+1]=ct[k]+bt[i];
        else if(j==1&&check==1)
            ct[i+1]=ct[n]+bt[i];
        else
            ct[i+1]=ct[i]+bt[i];

        bt[i]=0;
    }else{
        if(j>1&&check==1)
            ct[i+1]=ct[k]+q;
        else if(j==1&&check==1)
            ct[i+1]=ct[n]+q;
        else
            ct[i+1]=ct[i]+q;
        bt[i]=bt[i]-q;
    }
    if(bt[i]==0){
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
