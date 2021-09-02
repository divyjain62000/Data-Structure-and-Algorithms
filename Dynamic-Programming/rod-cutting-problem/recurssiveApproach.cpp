#include<iostream>
using namespace std;
int mem[10000][10000];
int maxProfit(int n,int *pieces,int *price,int maxLen)
{
if(n==0 || maxLen==0) return 0;
if(pieces[n-1]<=maxLen)
{
mem[n][maxLen]=max(price[n-1]+maxProfit(n,pieces,price,maxLen-pieces[n-1]),maxProfit(n-1,pieces,price,maxLen));
}
else
{
mem[n][maxLen]=maxProfit(n-1,pieces,price,maxLen);
}
return mem[n][maxLen];
}
int main()
{
int n;
cout<<"Enter n: ";
cin>>n;
int pieces[n];
int price[n];
for(int i=0;i<n;i++) cin>>pieces[i];
for(int i=0;i<n;i++) cin>>price[i];
cout<<"Max profit is "<<maxProfit(n,pieces,price,n);
return 0;
}