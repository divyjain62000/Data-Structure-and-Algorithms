#include<stdio.h>
#include<stdlib.h>
int isSubset(int *set,int n,int sum)
{
if(n==0 && sum!=0) return 0;
if(sum==0) return 1;
if(set[n-1]>sum) return isSubset(set,n-1,sum);
else return (isSubset(set,n-1,sum) || isSubset(set,n-1,sum-set[n-1]));
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