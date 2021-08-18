#include<iostream>
#include<vector>
using namespace std;
int search(vector<int> &nums,int target)
{
int n=nums.size();
for(int i=0;i<n;i++)
{
if(nums[i]==target) return i;
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