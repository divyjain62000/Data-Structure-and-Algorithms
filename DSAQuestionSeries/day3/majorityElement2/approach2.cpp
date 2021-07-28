#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<int> majorityElement(vector<int>& nums)
{
vector<int> res;
int n=nums.size();
map<int,int> m;
for(int x:nums)
{
if(m.find(x)==m.end()) m[x]=1;
else m[x]++;
}
map<int,int>::iterator *itr;
int candidate=-1;
int majority=-1;
for(auto x:m)
{
if(x.second>(n/3)) res.push_back(x.first);
}
return res;
}
int main()
{
int n;
vector<int> nums;
cout<<"Enter n: ";
cin>>n;
cout<<"Enter elements: ";
for(int i=0;i<n;i++)
{
int e;
cin>>e;
nums.push_back(e);
}
vector<int> res=majorityElement(nums);
for(int x:res) cout<<x<<" ";
return 0;
}