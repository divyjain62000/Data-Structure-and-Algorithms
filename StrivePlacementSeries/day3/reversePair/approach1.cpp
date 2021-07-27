#include<iostream>
#include<stdlib.h>
using namespace std;
int merge(int *arr,int lb,int mid,int ub)
{
int i;
int j=mid+1;
int *tmp;
int n=ub-lb+1;
int count=0;
int low=lb;
int high=ub;
tmp=(int *)malloc(sizeof(int)*n);
for(i=low;i<=mid;i++)
{
while(j<=high && arr[i]>2*arr[j]) 
{
j++;
}
count+=(j-(mid+1));
}
i=low;
j=mid+1;
int k=lb;
while(i<=mid && j<=high)
{
if(arr[i]<=arr[j]) tmp[k++]=arr[i++];
else
{
tmp[k++]=arr[j++];
}
}

while(i<=mid)
{
tmp[k++]=arr[i++];
}
while(j<=ub)
{
tmp[k++]=arr[j++];
}
i=lb;
while(i<=ub)
{
arr[i]=tmp[i];
i++;
}
free(tmp);
return count;
}

int getInversionCount(int *arr,int lb,int ub)
{
int count=0;
if(lb<ub)
{
int mid=(lb+ub)/2;
count+=getInversionCount(arr,lb,mid);
count+=getInversionCount(arr,mid+1,ub);
count+=merge(arr,lb,mid+1,ub);
}
return count;
}

int main()
{
int *arr;
int n;
cout<<"Enter size of an array: ";
cin>>n;
arr=(int *)malloc(sizeof(int)*n);
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Total number of inversion count in an array is "<<getInversionCount(arr,0,n-1);
return 0;
}