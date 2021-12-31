//O(n)
#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
vector<int> twoSum(vector<int> nums,int target)
{
vector<pair<int,int>> v;
unordered_map<int,int> m;
vector<int> res;
int n=nums.size();
for(int i=0;i<n;i++)
{
v.push_back({nums[i],i});
}
for(auto p:v)
{
int t=target-p.first;
if(m.find(t)!=m.end())
{
if(m[t]<p.second)
{
res.push_back(m[t]);
res.push_back(p.second);
}
else
{
res.push_back(p.second);
res.push_back(m[t]);
}
return res;
}
else
{
m.insert({p.first,p.second});
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