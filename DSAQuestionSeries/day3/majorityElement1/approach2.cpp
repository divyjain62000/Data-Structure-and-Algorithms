#include<iostream>
#include<vector>
using namespace std;
int majorityElement(vector<int>& nums)
{
int n=nums.size();
int count=0;
int candidate=0;
for(int x:nums)
{
if(count==0) 
{
candidate=x;
}
if(x==candidate) count++;
else count--;
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