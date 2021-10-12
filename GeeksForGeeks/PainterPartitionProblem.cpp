class Solution
{
public:
long long minTime(int arr[], int n, int k)
{
long long sum[n+1]={0};
for(long i=1;i<=n;i++) sum[i]=sum[i-1]+arr[i-1];

long long dp[k+1][n+1]={0};

for(int i=1;i<=n;i++) dp[1][i]=sum[i];
for(int i=1;i<=k;i++) dp[i][1]=arr[0];

for(int i=2;i<=k;i++)
{
for(int j=2;j<=n;j++)
{
long long best=LONG_MAX;

for(int p=1;p<=j;p++)
{
best=min(best,max(dp[i-1][p],sum[j]-sum[p]));
}

dp[i][j]=best;
}
}
return dp[k][n];
}
};