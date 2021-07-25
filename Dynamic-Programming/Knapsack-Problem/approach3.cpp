#include<iostream>
#include<stdlib.h>
using namespace std;
int maxProfit(int *wt,int *profit,int w,int n,int **dp)
{
for(int i=0;i<=n;i++)
{
for(int j=0;j<=w;j++)
{
if(i==0 || j==0) dp[i][j]=0;
else if(wt[i-1]>j) dp[i][j]=dp[i-1][j];
else dp[i][j]=__max(dp[i-1][j],profit[i-1]+dp[i-1][w-wt[i-1]]);
}
}
return dp[n][w];
}
int main()
{
int n;
int *profit;
int *wt;
int w;
cout<<"Enter n: ";
cin>>n;
cout<<"Enter w: ";
cin>>w;
wt=(int *)malloc(sizeof(int)*n);
profit=(int *)malloc(sizeof(int)*n);
cout<<"Enter weights: ";
for(int i=0;i<n;i++)
{
cin>>wt[i];
}
cout<<"Enter profits: ";
for(int i=0;i<n;i++)
{
cin>>profit[i];
}
int **dp;
dp=(int **)malloc(sizeof(int *)*(n+1));
for(int i=0;i<n;i++)
{
dp[i]=(int *)malloc(sizeof(int)*(w+1));
}
cout<<maxProfit(wt,profit,w,n,dp);
for(int i=0;i<n;i++)
{
free(dp[i]);
}
free(dp);
free(wt);
free(profit);
return 0;
}