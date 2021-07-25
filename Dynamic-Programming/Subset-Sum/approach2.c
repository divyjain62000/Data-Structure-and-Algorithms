#include<stdio.h>
#include<stdlib.h>
int isSubset(int *set,int n,int sum)
{
int subset[n+1][sum+1];
for(int i=0;i<=n;i++)
{
subset[i][0]=1;
}
for(int i=1;i<=sum;i++)
{
subset[0][i]=0;
}
for(int i=1;i<=n;i++)
{
for(int j=1;j<=sum;j++)
{
if(j<set[i-1]) subset[i][j]=subset[i-1][j];
else subset[i][j]=(subset[i-1][j] || subset[i-1][j-set[i-1]]); 
}
}
return subset[n][sum];
}
int main()
{
int n;
int *set;
int sum;
printf("Enter size of set: ");
scanf("%d",&n);
printf("Enter elements of set: ");
set=(int *)malloc(sizeof(int)*n);
for(int i=0;i<n;i++)
{
scanf("%d",&set[i]);
}
printf("Enter sum: ");
scanf("%d",&sum);
printf("Is subset found: %d",isSubset(set,n,sum));
return 0;
}