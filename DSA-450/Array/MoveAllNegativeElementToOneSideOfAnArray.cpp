#include<iostream>
using namespace std;
int main()
{
int n;
cin>>n;
int arr[n];
int i;
for(i=0;i<n;i++) cin>>arr[i];

i=0;
for(int j=0;j<n;j++) 
{
if(arr[j]<0) 
{
if(i!=j) 
{
int g=arr[i];
arr[i]=arr[j];
arr[j]=g;
}
i++;
}
}
for(i=0;i<n;i++) cout<<arr[i]<<" ";
return 0;
}