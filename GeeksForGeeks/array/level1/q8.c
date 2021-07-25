#include<stdio.h>
#include<stdlib.h>
void rearrangeArray(int n,int *arr)
{
int i,j;
j=0;
for(i=0;i<n;i++)
{
if(arr[i]<0)
{
if(i!=j)
{
int g=arr[j];
arr[j]=arr[i];
arr[i]=g;
}
j++;
}
}
}
void printArray(int n,int *arr)
{
int i;
for(i=0;i<n;i++) printf("%d ",arr[i]);
}
int main()
{
int n;
int i;
int *arr; 
printf("Enter size of array: ");
scanf("%d",&n);
arr=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++) scanf("%d",&arr[i]);
rearrangeArray(n,arr);
printArray(n,arr);
free(arr);
return 0;
}