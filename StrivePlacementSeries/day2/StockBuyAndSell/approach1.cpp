#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int maxProfit(vector<int> &prices)
{
int maxProfit=0;
int n=prices.size();
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
maxProfit=max(maxProfit,prices[j]-prices[i]);
}
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
