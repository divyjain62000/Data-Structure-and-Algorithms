#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;
void nextPermutation(vector<int>& nums)
{
int n=nums.size();
int l,k;
for(k=n-2;k>=0;k--)
{
if(nums[k]<nums[k+1]) break;
}
if(k<0)
{
reverse(nums.begin(),nums.end());
}
else
{
for(l=n-1;l>k;l--)
{
if(nums[k]<nums[l]) break;
}
swap(nums[k],nums[l]);
reverse(nums.begin()+k+1,nums.end());
}
}   
int main()
{
int n;
vector<int> nums;
cout<<"Enter size: ";
cin>>n;
for(int i=0;i<n;i++)
{
int e;
cin>>e;
nums.push_back(e);
}
nextPermutation(nums);
for(int x:nums) cout<<x<<" ";
return 0;
}