#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProfit(vector<int> &prices)
{
int maxProfit=0;
int minimal=INT_MAX;
for(int x:prices)
{
minimal=min(minimal,x);
maxProfit=max(maxProfit,x-minimal);
}
return maxProfit;
}
int main()
{
int n;
vector<int> prices;
cout<<"Enter n: ";
cin>>n;
for(int i=0;i<n;i++)
{
int e;
cin>>e;
prices.push_back(e);
}
cout<<"Maximum profit is "<<maxProfit(prices);
return 0;
}
