#include<iostream>
#include<vector>
using namespace std;
int getTotalUniquePaths(int i,int j,int r,int c,vector<vector<int>> &dp)
{
if(i==(r-1) && j==(c-1)) return 1;
if(i>=r || j>=c) return 0;
if(dp[i][j]!=-1) return dp[i][j];
return dp[i][j]=getTotalUniquePaths(i+1,j,r,c,dp)+getTotalUniquePaths(i,j+1,r,c,dp);
}
int main()
{
int r;
int c;
cout<<"Enter number of rows: ";
cin>>r;
cout<<"Enter number of columns: ";
cin>>c;
vector<vector<int>> dp(r);
for(int i=0;i<r;i++)
{
dp[i]=vector<int>(c);
for(int j=0;j<c;j++)
{
dp[i].push_back(-1);
}
}
cout<<"Total number of unique path which is possible are "<<getTotalUniquePaths(0,0,r,c,dp);
return 0;
}