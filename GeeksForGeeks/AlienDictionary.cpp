#include<iostream>
#include<vector>
#include<string>
using namespace std;
void dfs(int src,vector<vector<int>> &g,vector<int> &vis,string &ans)
{
vis[src]=1;
for(auto x:g[src])
{
if(!vis[x])
{
dfs(x,g,vis,ans);
}
}
char ch=src+'a';
ans=ch+ans;
}

string findOrder(string s[],int n,int k)
{
vector<vector<int>> g(k);
for(int i=0;i<n-1;i++)
{
int minLen=min(s[i].length(),s[i+1].length());
for(int j=0;j<minLen;j++)
{
if(s[i][j]!=s[i+1][j]) 
{
g[s[i][j]-'a'].push_back(s[i+1][j]-'a');
break;
}
}
}
string ans="";
vector<int> vis(k,0);
for(int i=0;i<k;i++)
{
if(!vis[i]) dfs(i,g,vis,ans);
}
return ans;
}

int main()
{
int n;
cin>>n;
int k;
cin>>k;
string dict[n];
for(int i=0;i<n;i++)
{
cin>>dict[i];
}
cout<<findOrder(dict,n,k);
return 0;
}
