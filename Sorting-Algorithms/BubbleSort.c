#include<stdio.h>
#include<stdlib.h>
void bubbleSort(int *arr,int n)
{
int e=0;
while(e<n-1)
{
int i=0;
int j=i+1;
while(i<n-e-1 && j<n-e)
{
if(arr[i]>arr[j])
{
int g=arr[i];
arr[i]=arr[j];
arr[j]=g;
}
i++;
j++;
}
e++;
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
free(arr);
return 0;
}