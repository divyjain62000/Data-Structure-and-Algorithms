#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void _combinationSum(vector<vector<int>> &ans,vector<int> &candidates,vector<int> &ds,int i,int target)
{
if(i==candidates.size())
{
if(target==0) ans.push_back(ds);
return;
}
if(candidates[i]<=target)
{
ds.push_back(candidates[i]);
_combinationSum(ans,candidates,ds,i,target-candidates[i]);
ds.pop_back();
}
_combinationSum(ans,candidates,ds,i+1,target);
}
vector<vector<int>> combinationSum(vector<int>  &candidates,int target)
{
vector<vector<int>> ans;
vector<int> ds;
int n=candidates.size();
_combinationSum(ans,candidates,ds,0,target);
return ans;
}
int main()
{
vector<int> arr;
int N;
cout<<"Enter size: ";
cin>>N;
int target;
cout<<"Enter target: ";
cin>>target;
cout<<"Enter elements: "<<endl;
for(int i=0;i<N;i++)
{
int e;
cin>>e;
arr.push_back(e);
}
cout<<"subset sum are: \n";
vector<vector<int>> res=combinationSum(arr,target);
for(vector<int> v:res) 
{
for(int x:v) cout<<x<<" ";
cout<<endl;
}
return 0;
}
