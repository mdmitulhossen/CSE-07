#include <stdio.h>
int main()
{
int n, bt[20], wt[20], i, j, p[20],pr[20], pos, temp;
printf("Enter Process Number : ");
scanf("%d", &n);
printf("Enter Brust Time and Priority of Each Process: \n");
for (i = 0; i < n; i++){
printf("Process %d : \nBrush Time : ", i + 1);
scanf("%d", &bt[i]);
printf("Priority : ");
scanf("%d", &pr[i]);
p[i] = i + 1;
} // sorting algo selection
for (i = 0; i < n; i++){
pos = i;
for (j = i + 1; j < n; j++)
{
if (pr[j] < pr[pos])
pos = j;
}
temp = pr[i];
pr[i] = pr[pos];
pr[pos] = temp;
temp = bt[i];
bt[i] = bt[pos];
bt[pos] = temp;
temp = p[i];
p[i] = p[pos];
p[pos] = temp;
}
wt[0] = 0;
for (i = 0; i < n; i++){
wt[i + 1] = wt[i] + bt[i];
}
for (i = 0; i < n; i++)
{
printf("Process No: %d, Brust Time: %d, Waiting Time: %d, Turnaround: %d\n", p[i], bt[i], wt[i], bt[i] +
wt[i]);
}
return 0;
}
