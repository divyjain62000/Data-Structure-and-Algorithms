#include<iostream>
#include<algorithm>
using namespace std;
bool findTriplets(int arr[], int n)
{ 
sort(arr,arr+n);
bool flag=false;
for(int i=0;i<=n-2;i++)
{
int l=i+1;
int r=n-1;
while(l<r)
{
int sum=arr[i]+arr[l]+arr[r];
if(sum==0) {
cout<<"{"<<arr[i]<<", "<<arr[l]<<", "<<arr[r]<<"}"<<endl;
flag=true;
l++;
r--;
}
else if(sum<0) l++;
else if(sum>0) r--;
}
}
return flag;
}

int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
cout<<"Is triplet exists: "<< findTriplets(arr,n);
return 0;
}
