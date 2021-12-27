#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int smallestRangeII(vector<int>& nums, int k) 
{
sort(nums.begin(),nums.end());
int n=nums.size();
int ans=nums[n-1]-nums[0];
for(int i=0;i<nums.size()-1;i++)
{
int low=min(nums[0]+k,nums[i+1]-k);
int high=max(nums[n-1]-k,nums[i]+k);
ans=min(ans,high-low);
}
return ans;
}
int main()
{
int n,k;
vector<int> nums;
cin>>n;
for(int i=0;i<n;i++) 
{
int t;
cin>>t;
nums.push_back(t);
}
cin>>k;
cout<<smallestRangeII(nums,k);
return 0;
}