#include<iostream>
#include<stdlib.h>
using namespace std;
int maxProfit(int *wt,int *profit,int w,int n,int **dp)
{
if(w==0 || n==0) return 0;
if(dp[n-1][w-1]!=-1) return dp[n-1][w-1];
if(wt[n-1]>w) 
{
dp[n][w]=maxProfit(wt,profit,w,n-1,dp);
return dp[n][w];
}
else 
{
dp[n][w]=__max(maxProfit(wt,profit,w,n-1,dp),profit[n-1]+maxProfit(wt,profit,w-wt[n-1],n-1,dp));
return dp[n][w];
}
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
for(int i=0;i<=n;i++)
{
for(int j=0;j<=w;j++)
{
dp[i][j]=-1;
}
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