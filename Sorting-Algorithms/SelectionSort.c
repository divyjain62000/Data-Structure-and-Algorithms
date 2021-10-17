#include<stdio.h>
#include<stdlib.h>
void selectionSort(int *arr,int n)
{
for(int i=0;i<n-1;i++)
{
int minIndex=i;
for(int j=i+1;j<n;j++)
{
if(arr[j]<arr[minIndex]) minIndex=j;
}
int g=arr[i];
arr[i]=arr[minIndex];
arr[minIndex]=g;
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
selectionSort(arr,n);
for(int i=0;i<n;i++) printf("%d ",arr[i]);
free(arr);
return 0;
}