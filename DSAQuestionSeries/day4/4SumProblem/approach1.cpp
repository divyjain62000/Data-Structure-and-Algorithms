#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> fourSum(vector<int> &nums,int target)
{
vector<vector<int>> res;
if(nums.empty()) return res;
int n=nums.size();
sort(nums.begin(),nums.end());
for(int i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
int target2=target-nums[i]-nums[j];
int left=j+1;
int right=n-1;
while(left<right)
{
int twoSum=nums[left]+nums[right];
if(twoSum<target2) left++;
else if(twoSum>target2) right--;
else
{
vector<int> quad;
quad.push_back(nums[i]);
quad.push_back(nums[j]);
quad.push_back(nums[left]);
quad.push_back(nums[right]);
res.push_back(quad);
while(left<right && nums[left]==quad[2]) left++;
while(left<right && nums[right]==quad[3]) right--;
}
while(j+1<n && nums[j+1]==nums[j]) j++;
}
while(i+1<n && nums[i+1]==nums[i]) i++;
}
}
return res;
}
int main()
{
int n;
vector<int> nums;
cout<<"Enter size: ";
cin>>n;
cout<<"Enter elements: "<<endl;
for(int i=0;i<n;i++)
{
int e;
cin>>e;
nums.push_back(e);
}
int target;
cout<<"Enter target: ";
cin>>target;
vector<vector<int>> res=fourSum(nums,target);
for(vector<int> v:res)
{
for(int x:v) cout<<x<<" ";
cout<<endl;
}
return 0;
}