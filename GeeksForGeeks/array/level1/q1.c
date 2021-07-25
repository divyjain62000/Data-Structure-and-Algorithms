#include<stdio.h>
#include<stdlib.h>
void keyPresentInAllSegments(int n,int *arr,int k,int x)
{
int i;
int present=0;
for(i=0;i<n;i++)
{
if(arr[i]==x) present=1;
if((i+1)%k==0)
{
if(!present) break;
if(i!=n-1)present=0;
}
}
if(present) printf("YES");
else printf("NO");
}
int main()
{
int n,x,k;
int i;
int *arr; 
printf("Enter size of array: ");
scanf("%d",&n);
printf("Enter x: ");
scanf("%d",&x);
printf("Enter k: ");
scanf("%d",&k);
arr=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++) scanf("%d",&arr[i]);
keyPresentInAllSegments(n,arr,k,x);
free(arr);
return 0;
}