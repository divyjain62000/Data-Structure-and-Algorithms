#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int getMinDiff(int arr[],int n,int k) 
{
vector<pair<int,int>> v;
int visited[n];
for(int i=0;i<n;i++)
{
if(arr[i]-k>=0) v.push_back({arr[i]-k,i});
v.push_back({arr[i]+k,i});
visited[i]=0;
}
sort(v.begin(),v.end());
int left=0;
int right=0;
int ele=0;
int size=v.size();
while(ele<n && right<size)
{
if(visited[v[right].second]==0) ele++;
visited[v[right].second]++;
right++;
}
int ans=v[right-1].first-v[left].first;
while(right<size)
{
if(visited[v[left].second]==1) ele--;
visited[v[left].second]--;
left++;
while(ele<n && right<size)
{
if(visited[v[right].second]==0) ele++;
visited[v[right].second]++;
right++;
}
if(ele==n) ans=min(ans,v[right-1].first-v[left].first);
else break;
}
return ans;
}
int main()
{
int k;
cin>>k;
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
cout<<getMinDiff(arr,n,k);
return 0;
} 