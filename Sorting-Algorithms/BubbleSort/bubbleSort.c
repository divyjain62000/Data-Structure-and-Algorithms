#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int *arr,int n)
{
for(int i=0;i<n-1;i++)
{
for(int j=0;j<n-i-1;j++)
{
if(arr[j]>arr[j+1])
{
int g=arr[j];
arr[j]=arr[j+1];
arr[j+1]=g;
}
}
}
}
int main()
{
int n;
printf("Enter size of an array: ");
scanf("%d",&n);
int *arr=(int *)malloc(sizeof(int)*n);
if(arr==NULL)
{
printf("Unable to allocate memory");
return 0;
}
for(int i=0;i<n;i++) scanf("%d",&arr[i]);
bubbleSort(arr,n);
for(int i=0;i<n;i++) printf("%d ",arr[i]);
return 0;
}