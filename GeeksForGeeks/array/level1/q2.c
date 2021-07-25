#include<stdio.h>
#include<stdlib.h>
int getMinElement(int n,int *arr)
{
int i;
int min=arr[0];
for(i=1;i<n;i++)
{
if(min>arr[i]) min=arr[i];
}
return min;
}
int getMaxElement(int n,int *arr)
{
int i;
int max=arr[0];
for(i=1;i<n;i++)
{
if(max<arr[i]) max=arr[i];
}
return max;
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
int min=getMinElement(n,arr);
int max=getMaxElement(n,arr);
printf("Minimum element: %d ",min);
printf("Maximum element: %d ",max);
free(arr);
return 0;
}