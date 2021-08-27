#include<stdio.h>
#include<stdlib.h>
int findPartitionPoint(int *x,int low,int high)
{
int e=low;
int f=high;
while(e<=high && x[low]<=x[e]) e++;
while(f>=low && x[low]>x[f]) f--;
if(e<f)
{
int g=x[e];
x[e]=x[f];
x[f]=g;
}
else
{
int g=x[low];
x[low]=x[f];
x[f]=g;
}
return f;
}
void quicksort(int *arr,int low,int high)
{
if(low<high)
{
int pp=findPartitionPoint(arr,low,high);
quicksort(arr,low,pp-1);
quicksort(arr,pp+1,high);
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
quicksort(arr,0,n-1);
for(int i=0;i<n;i++) printf("%d ",arr[i]);
return 0;
}