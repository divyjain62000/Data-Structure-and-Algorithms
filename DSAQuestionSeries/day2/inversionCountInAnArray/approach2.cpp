#include<iostream>
#include<stdlib.h>
using namespace std;
int merge(int *arr,int lb,int mid,int ub)
{
int i=lb;
int j=mid;
int k=lb;
int *tmp;
int n=ub-lb+1;
int invCount=0;
tmp=(int *)malloc(sizeof(int)*n);
while(i<=mid-1 && j<=ub)
{
if(arr[i]<=arr[j]) tmp[k++]=arr[i++];
else
{
tmp[k++]=arr[j++];
invCount+=(mid-i);
}
}
while(i<=mid-1)
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


return invCount;
}

int getInversionCount(int *arr,int lb,int ub)
{
int invCount=0;
if(lb<ub)
{
int mid=(lb+ub)/2;
invCount+=getInversionCount(arr,lb,mid);
invCount+=getInversionCount(arr,mid+1,ub);
invCount+=merge(arr,lb,mid+1,ub);
}
return invCount;
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