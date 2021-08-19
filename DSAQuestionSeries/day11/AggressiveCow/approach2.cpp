#include<iostream>
#include<algorithm>
using namespace std;
bool isPossibleToPlaceCow(int k,int *arr,int n,int cows)
{
int cowCount=1;
int coordinate=arr[0];
for(int i=1;i<n;i++)
{
if((arr[i]-coordinate)>=k)
{
cowCount+=1;
coordinate=arr[i];
}
if(cowCount==cows) return true;
}
return false;
}
int aggressiveCows(int n,int *arr,int cows)
{
int low=arr[0];
int high=arr[n-1]-low;
int res=-1;
while(low<=high)
{
int mid=(low+high)>>1;
if(isPossibleToPlaceCow(mid,arr,n,cows))
{
res=mid;
low=mid+1;
}
else
{
high=mid-1;
}
}
return res;
}
int main()
{
int n;
cout<<"Enter number stalls: ";
cin>>n;
int *arr=new int[n];
cout<<"Enter stalls: \n";
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
sort(arr,arr+n);
int cows;
cout<<"Enter number of cows: ";
cin>>cows;
cout<<aggressiveCows(n,arr,cows);
delete []arr;
return 0;
}