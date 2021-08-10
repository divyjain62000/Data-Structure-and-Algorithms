#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool isPalindrome(string s,int start,int end,int n)
{
int j=end;
for(int i=start;i<j;i++)
{
if(s[i]!=s[j]) return false;
j--;
}
return true;
}
void _partition(string s,int index,vector<vector<string>> &res,vector<string> &paths,int n)
{
if(index==n)
{
res.push_back(paths);
return;
}
for(int i=index;i<n;i++)
{
if(isPalindrome(s,index,i,n))
{
paths.push_back(s.substr(index,i-index+1));
_partition(s,i+1,res,paths,n);
paths.pop_back();
}
}
}
vector<vector<string>> partition(string s)
{
vector<vector<string>> res;
vector<string> paths;
int n=s.size();
_partition(s,0,res,paths,n);
return res;
}
int main()
{
string s;
cout<<"Enter a string: ";
cin>>s;
vector<vector<string>> res=partition(s);
for(vector<string> v:res)
{
for(string x:v)
{
cout<<x<<" ";
}
cout<<endl;
}
return 0;
}