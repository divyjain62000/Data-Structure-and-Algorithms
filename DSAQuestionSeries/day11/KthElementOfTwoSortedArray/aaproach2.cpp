#include<iostream>
using namespace std;
int kthElement(int arr1[],int arr2[],int n,int m,int k)
{
if(n>m) kthElement(arr1,arr2,m,n,k);
int low=max(0,k-m);
int high=max(n,k);
while(low<=high)
{
int cut1=(low+high)>>1;
int cut2=k-cut1;
int l1=cut1==0? INT_MIN :arr1[cut1-1];
int l2=cut2==0? INT_MIN :arr2[cut2-1];
int r1=cut1==n? INT_MAX :arr1[cut1];
int r2=cut2==m? INT_MAX :arr2[cut2];
if(l1<=r2 && l2<=r1) return max(l1,l2);
else if(l1>l2) high=cut1-1;
else low=cut1+1;
}
return 1;
}
int main()
{
int n;
int m;
cout<<"Enter size of first array: ";
cin>>n;
int arr1[n];
cout<<"Enter element of first array: ";
for(int i=0;i<n;i++) cin>>arr1[i];
cout<<"Enter size of second array: ";
cin>>m;
int arr2[m];
cout<<"Enter element of second array: ";
for(int i=0;i<m;i++) cin>>arr2[i];
int k;
cout<<"Enter k: ";
cin>>k;
cout<<kthElement(arr1,arr2,n,m,k);
return 0;
}