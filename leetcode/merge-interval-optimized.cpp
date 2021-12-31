//O(n*log(n))
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> merge(vector<vector<int>> intervals)
{
int n=intervals.size();
sort(intervals.begin(),intervals.end());
vector<vector<int>> res;
int s=intervals[0][0];
int e=intervals[0][1];
for(int i=1;i<n;i++)
{
if(intervals[i][0]<=e)
{
e=e<=intervals[i][1]?intervals[i][1]:e;
}
else
{
vector<int> tmp;
tmp.push_back(s);
tmp.push_back(e);
res.push_back(tmp);
s=intervals[i][0];
e=intervals[i][1];
}
}
vector<int> tmp;
tmp.push_back(s);
tmp.push_back(e);
res.push_back(tmp);
return res;
}
int main()
{
int n;
cin>>n;
vector<vector<int>> intervals;
int s;
int e;
for(int i=0;i<n;i++)
{
cin>>s;
cin>>e;
vector<int> tmp;
tmp.push_back(s);
tmp.push_back(e);
intervals.push_back(tmp);
}
vector<vector<int>> res=merge(intervals);
for(vector<int> v:res)
{
cout<<"[";
for(int x: v)
{
cout<<x<<" ";
}
cout<<"] ";
}
return 0;
}