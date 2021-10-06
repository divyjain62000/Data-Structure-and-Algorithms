#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;
vector<int> kLargest(int arr[], int n, int k) 
{
priority_queue<int> pq;
vector<int> res;
for(int i=0;i<k;i++)
{
pq.push((-1) * arr[i]);
}
for(int i=k;i<n;i++)
{
int tmp=pq.top()*-1;
if(tmp<arr[i])
{
pq.pop();
pq.push((-1) * arr[i]);
}
}
for(int i=1;i<=k;i++)
{
res.push_back(pq.top()*-1);
pq.pop();
}
sort(res.begin(),res.end(), greater<int>());
return res;
}
int main()
{
int n;
cin>>n;
int k;
cin>>k;
int arr[n];
for(int i=0;i<n;i++)
{
cin>>arr[i];
}
vector<int> res=kLargest(arr,n,k);
for(int x:res)
{
cout<<x<<" ";
}
return 0;
}