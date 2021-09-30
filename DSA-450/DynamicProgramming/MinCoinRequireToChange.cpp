class Solution 
{
public:
long long dp[1000][1000];
long long int count(int S[], int n, int amount) 
{
for(int i=0;i<=n;i++)
{
for(int j=0;j<=amount;j++)
{
if(i==0) dp[i][j]=INT_MAX;
else if(j==0) dp[i][j]=0;
else if(S[i-1]>j) dp[i][j]=dp[i-1][j];
else dp[i][j]=min(1+dp[i][j-S[i-1]],dp[i-1][j]);
}
}
return dp[n][amount]>1e3 ? -1:dp[n][amount];
}
};
