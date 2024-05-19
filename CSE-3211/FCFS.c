#include <stdio.h>
int main(){
int n, bt[20], wt[20],i,total=0;
printf("Enter Process Number : ");
scanf("%d",&n);
printf("Enter Brust Time of Each Process: \n");
for(i=0;i<n;i++){
printf("Process %d : ", i+1);
scanf("%d",&bt[i]);
}
wt[0]=0;
for(i=0;i<n;i++){
wt[i+1]= wt[i]+bt[i];
total += wt[i];
}
printf("First Come, First Serve Schedule is .......\n");
for(i=0;i<n;i++){
printf("Process No = %d, Brust Time = %d, Waiting Time = %d, Turnaround: %d\n", i+1, bt[i], wt[i],
bt[i]+wt[i]);
}
printf("Avarage Waiting Time = %d\n", total / n);
return 0;
}