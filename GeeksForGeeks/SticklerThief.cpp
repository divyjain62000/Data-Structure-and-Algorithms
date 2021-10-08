class Solution
{
int dp[10000];
public:
int _FindMaxSum(int arr[], int n)
{
if(n<0) 
{
return 0;
}
if(dp[n]!=-1) return dp[n];
int op1=arr[n]+_FindMaxSum(arr,n-2);
int op2=_FindMaxSum(arr,n-1);
dp[n]=max(op1,op2);
return dp[n];
}
int FindMaxSum(int arr[], int n)
{
for(int i=0;i<n;i++) {
dp[i]=-1;
}
return _FindMaxSum(arr,n-1);
}
};