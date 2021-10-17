#include<stdio.h>
#include<stdlib.h>
void insertionSort(int *arr,int n)
{
int e=0;
while(e<n)
{
int currentElement=arr[e];
int f=e-1;
while(f>=0 && arr[f]>currentElement)
{
arr[f+1]=arr[f];
f--;
}
arr[f+1]=currentElement;
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
insertionSort(arr,n);
for(int i=0;i<n;i++) printf("%d ",arr[i]);
free(arr);
return 0;
}