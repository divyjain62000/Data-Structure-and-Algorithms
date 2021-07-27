#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
int longestConsecutive(vector<int> &nums)
{
unordered_set<int> set;
int longestConsecutive=0;
for(int x:nums) set.insert(x);
for(int x:nums)
{
int currentLength=0;
if(set.find(x-1)==set.end())
{
int currentNum=x;
while(set.find(currentNum)!=set.end())
{
currentLength++;
currentNum++;
}
longestConsecutive=max(currentLength,longestConsecutive);
}
}
return longestConsecutive;
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
int res=longestConsecutive(nums);
cout<<"Longest consecutive sequence length is "<<res;
return 0;
}