#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void _subsetSum(int i,int sum,vector<int> &arr,vector<int> &res,int N)
{
if(i==N)
{
res.push_back(sum);
return;
}
_subsetSum(i+1,sum+arr[i],arr,res,N);
_subsetSum(i+1,sum,arr,res,N);
}
vector<int> subsetSum(vector<int>  arr,int N)
{
vector<int> res;
_subsetSum(0,0,arr,res,N);
sort(res.begin(),res.end());
return res;
}
int main()
{
vector<int> arr;
int N;
cout<<"Enter size: ";
cin>>N;
cout<<"Enter elements: "<<endl;
for(int i=0;i<N;i++)
{
int e;
cin>>e;
arr.push_back(e);
}
cout<<"subset sum are: \n";
vector<int> res=subsetSum(arr,N);
for(int x:res) cout<<x<<" ";
return 0;
}
