#include<stdio.h>
#include<stdlib.h>
void merge(int *x,int lb,int mid,int ub)
{
int lb1,lb2,lb3;
int ub1,ub2,ub3;
int n=(ub-lb)+1;
int temp[n];
int i1,i2,i3;
lb1=lb;
ub1=mid;
lb2=mid+1;
ub2=ub;
lb3=0;
ub3=n-1;
i1=lb1;
i2=lb2;
i3=lb3;
while(i1<=ub1 && i2<=ub2)
{
if(x[i1]<x[i2]) 
{
temp[i3]=x[i1];
i1++;
}
else
{
temp[i3]=x[i2];
i2++;
}
i3++;
}
while(i1<=ub1)
{
temp[i3]=x[i1];
i1++;
i3++;
}
while(i2<=ub2)
{
temp[i3]=x[i2];
i2++;
i3++;
}
i1=lb1;
i3=0;
while(i1<=ub2)
{
x[i1]=temp[i3];
i3++;
i1++;
}
}
void mergeSort(int *arr,int low,int high)
{
if(low<high)
{
int mid=(low+high)/2;
mergeSort(arr,low,mid-1);
mergeSort(arr,mid+1,high);
merge(arr,low,mid,high);
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
mergeSort(arr,0,n-1);
for(int i=0;i<n;i++) printf("%d ",arr[i]);
return 0;
}