#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int minOperations(string A,string B)
{
int aLen=A.length();
int bLen=B.length();
if(aLen==0) return bLen;
if(bLen==0) return aLen;
int dp[aLen+1][bLen+1];
for(int i=0;i<=aLen;i++)
{
for(int j=0;j<=bLen;j++)
{
if(i==0) dp[i][j]=j;
else if(j==0) dp[i][j]=i;
else if(A[i-1]==B[j-1]) dp[i][j]=dp[i-1][j-1];
else
{
int x=min(dp[i][j-1],dp[i-1][j]);
dp[i][j]=1+min(x,dp[i-1][j-1]);
}
}
}
return dp[aLen][bLen];
}
int main()
{
string A;
string B;
cin>>A;
cin>>B;
cout<<minOperations(A,B);
return 0;
}

