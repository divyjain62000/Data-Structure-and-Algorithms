//O(n^2)
#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int> nums,int target)
{
vector<int> res;
int n=nums.size();
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
if(nums[i]+nums[j]==target) 
{
res.push_back(i);
res.push_back(j);
return res;
}
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