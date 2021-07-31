#include<iostream>
#include<vector>
using namespace std;
void findSubset(int ind,vector<int> &nums,vector<int> &ds,vector<vector<int>> &ans,int n)
{
ans.push_back(ds);
for(int i=ind;i<n;i++)
{
if(i!=ind && nums[i]==nums[i-1]) continue;
ds.push_back(nums[i]);
findSubset(i+1,nums,ds,ans,n);
ds.pop_back();
}
}
vector<vector<int>> subsetsWithDup(vector<int> &nums)
{
vector<vector<int>> ans;
vector<int> ds;
int n=nums.size();
findSubset(0,nums,ds,ans,n);
return ans;
}
int main()
{
vector<int> nums;
int n;
cout<<"Enter size: ";
cin>>n;
for(int i=0;i<n;i++)
{
int e;
cin>>e;
nums.push_back(e);
}
vector<vector<int>> res=subsetsWithDup(nums);
for(vector<int> v:res)
{
for(int x: v) cout<<x<<" ";
cout<<endl;
}
return 0;
}