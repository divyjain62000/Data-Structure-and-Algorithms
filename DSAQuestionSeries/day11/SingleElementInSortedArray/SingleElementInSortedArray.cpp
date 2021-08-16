#include<iostream>
#include<vector>
using namespace std;
int singleNonDuplicate(vector<int> &nums)
{
int low=0;
int high=nums.size()-2;
while(low<=high)
{
int mid=(low+high) >>1;
if(nums[mid]==nums[mid^1]) low=mid+1;
else high=mid-1;
}
return nums[low];
}
int main()
{
vector<int> nums;
cout<<"Ente size: ";
int n;
cin>>n;
for(int i=0;i<n;i++)
{
int e;
cin>>e;
nums.push_back(e);
}
cout<<singleNonDuplicate(nums);
return 0;
}