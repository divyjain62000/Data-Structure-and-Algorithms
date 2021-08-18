#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &nums,int target)
{
int low=0;
int high=nums.size()-1;
while(low<=high)
{
int mid=(low+high)>>1;
if(nums[mid]==target) return mid;

if(nums[low]<=nums[mid]) 
{
if(nums[low]<=target && target<=nums[mid]) high=mid-1;
else low=mid+1;
}
else
{
if(nums[mid]<=target && target<=nums[high]) low=mid+1;
else high=mid-1;
}
}
return -1;
}
int main()
{
int target;
int n;
cout<<"Enter size of an array: ";
cin>>n;
cout<<"Enter elements of an array: ";
vector<int> nums;
for(int i=0;i<n;i++) 
{
int e;
cin>>e;
nums.push_back(e);
}
cout<<"Enter target: ";
cin>>target;
cout<<search(nums,target);
return 0;
}