#include<iostream>
#include<stdlib.h>
using namespace std;
int maxProfit(int *wt,int *profit,int w,int n)
{
if(w==0 || n==0) return 0;
if(wt[n-1]>w) return maxProfit(wt,profit,w,n-1);
else return __max(maxProfit(wt,profit,w,n-1),profit[n-1]+maxProfit(wt,profit,w-wt[n-1],n-1));
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
cout<<maxProfit(wt,profit,w, n);
free(wt);
free(profit);
return 0;
}