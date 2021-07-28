#include<iostream>
#include<stdlib.h>
using namespace std;
void sortSecondArray(int *arr2,int m)
{
for(int i=0;i<m-1;i++) 
{
if(arr2[i]>arr2[i+1]) 
{
int g=arr2[i];
arr2[i]=arr2[i+1];
arr2[i+1]=g;
}
}
}
void mergeSortedArray(int *arr1,int *arr2,int n,int m)
{
int i=0;
while(i<n)
{
if(arr1[i]>arr2[0]) 
{
int g=arr2[0];
arr2[0]=arr1[i];
arr1[i]=g;
sortSecondArray(arr2,m);
}
i++;
}
}
int main()
{
int n,m;
int *arr1,*arr2;
cout<<"Enter size of 1st array: ";
cin>>n;
cout<<"Enter size of 2nd array: ";
cin>>m;
cout<<"Enter elements of 1st array: ";
arr1=(int *)malloc(sizeof(int)*n);
for(int i=0;i<n;i++)
{
cin>>arr1[i];
}
cout<<"Enter elements of 2nd array: ";
arr2=(int *)malloc(sizeof(int)*m);
for(int i=0;i<m;i++)
{
cin>>arr2[i];
}
mergeSortedArray(arr1,arr2,n,m);
for(int i=0;i<n;i++)
{
cout<<arr1[i]<<" ";
}
cout<<endl;
for(int i=0;i<m;i++)
{
cout<<arr2[i]<<" ";
}
return 0;
}