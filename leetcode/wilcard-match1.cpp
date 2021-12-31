#include<iostream>
#include<string>
using namespace std;
class Solution 
{
public:
bool isMatch(string s, string p) 
{
int m=s.length();
int n=p.length();
bool store[m+1][n+1];
for(int i=0;i<=m;i++)
{
for(int j=0;j<=n;j++)
{
store[i][j]=false;
}
}
store[0][0]=true;
for(int j=1;j<=n;j++) 
{
if(p[j-1]=='*') store[0][j]=store[0][j-1];
}
for(int i=1;i<=m;i++)
{
for(int j=1;j<=n;j++)
{
if(p[j-1]=='*') store[i][j]=store[i][j-1] || store[i-1][j];
else if(p[j-1]=='?' || p[j-1]==s[i-1]) store[i][j]=store[i-1][j-1];
else store[i][j]=false;
}
}
return store[m][n];
}
};
int main()
{
string s;
string p;
cin>>s;
cin>>p;
Solution sol;
cout<<sol.isMatch(s,p);
return 0;
}