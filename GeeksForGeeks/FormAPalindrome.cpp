class Solution{ 
public:
int findMinInsertions(string S)
{
int n=S.length();
string rev=S;
reverse(rev.begin(),rev.end());
int dp[n+1][n+1];
for(int i=0;i<=n;i++)
{
for(int j=0;j<=n;j++)
{
if(i==0 || j==0) dp[i][j]=0;
else if(S[i-1]==rev[j-1]) dp[i][j]=dp[i-1][j-1]+1;
else dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
} 
}
return n-dp[n][n];
}
};
