#include<iostream>
#include<string>
#include<vector>
using namespace std;
void solve(int i,int j,int n,vector<vector<int>> &m,vector<vector<int>> &visited,vector<string> &ans,string move,int di[],int dj[])
{
if(i==n-1 && j==n-1) 
{
ans.push_back(move);
return;
}
string dir="DLRU";
for(int ind=0;ind<4;ind++)
{
int nexti=i+di[ind];
int nextj=j+dj[ind];
if(nexti>=0 && nexti<n && nextj>=0 && nextj<n && visited[nexti][nextj]==0 && m[nexti][nextj]==1)
{
visited[i][j]=1;
solve(nexti,nextj,n,m,visited,ans,move+dir[ind],di,dj);
visited[i][j]=0;
}
}
}
vector<string> findPath(vector<vector<int>> &m,int n)
{
vector<string> ans;
vector<vector<int>> visited(n,vector<int>(n,0));
int di[]={1,0,0,-1};
int dj[]={0,-1,1,0};
if(m[0][0]==1) solve(0,0,n,m,visited,ans,"",di,dj);
return ans;
}

int main()
{
int n;
cout<<"Enter maze size: ";
cin>>n;
vector<vector<int>> m(n);
cout<<"Enter maze: "<<endl;
for(int i=0;i<n;i++)
{
m[i]=vector<int >(n);
for(int j=0;j<n;j++)
{
int e;
cin>>e;
m[i][j]=e;
}
}
vector<string> res=findPath(m,n);
for(string x:res)
{
cout<<x<<endl;
}
if(res.size()==0) cout<<"-1";
return 0;
}