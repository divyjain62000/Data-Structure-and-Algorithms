#include<iostream>
#include<vector>
#include<map>
using namespace std;
int majorityElement(vector<int>& nums)
{
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
if(majority<x.second)
{
candidate=x.first;
majority=x.second;
}
}
return candidate;
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
cout<<"Majority element is "<<majorityElement(nums);
return 0;
}