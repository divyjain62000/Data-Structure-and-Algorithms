//O(n*log(n))
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool comparator(pair<int,int> p1,pair<int,int> p2)
{
return p1.first<p2.first;
}

vector<int> twoSum(vector<int> nums,int target)
{
vector<pair<int,int>> v;
vector<int> res;
int n=nums.size();
for(int i=0;i<n;i++)
{
v.push_back({nums[i],i});
}
sort(v.begin(),v.end(),comparator);
int l=0;
int r=n-1;
while(l<r)
{
int sum=v[l].first+v[r].first;
if(sum>target) r--;
else if(sum<target) l++;
else 
{
res.push_back(v[l].second);
res.push_back(v[r].second);
return res;
}
}
return res;
}
int main()
{
int n;
cin>>n;
vector<int> nums;
for(int i=0;i<n;i++)
{
int t;
cin>>t;
nums.push_back(t);
}
int target;
cin>>target;
vector<int> res=twoSum(nums,target);
cout<<res[0]<<" "<<res[1];
return 0;
}