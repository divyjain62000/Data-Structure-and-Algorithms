class Solution 
{
public:
int LongestRepeatingSubsequence(string str)
{
int n=str.length();
int dp[n+1][n+1];
for(int i=n;i>=0;i--)
{
for(int j=n;j>=0;j--)
{
if(i==n || j==n) dp[i][j]=0;
else if(str[i]!=str[j]) dp[i][j]=max(dp[i+1][j],dp[i][j+1]); //if char at i and j index are not equal then we take max
else if(str[i]==str[j] && i==j) dp[i][j]=max(dp[i+1][j],dp[i][j+1]); //if char at i and j index are equal but i==j then we take max
else if(str[i]==str[j] && i!=j) dp[i][j]=dp[i+1][j+1]+1; //if char at i and j index are equal and i!=j then we take icrement value diagonally by 1
}
}
return dp[0][0];
}
};
