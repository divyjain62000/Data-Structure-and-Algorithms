#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
void printRow(int n)
{
vector<int> row;
for(int i=0;i<n;i++)
{
if(i==0 || i==n-1) 
{
row.push_back(1);
}
else 
{
row.push_back(row[i-1]*(n-i)/i);
}
}
for(int x:row) cout<<x<<" ";
}
int main()
{
int r;
cout<<"Enter row number which you want to print: ";
cin>>r;
printRow(r);
return 0;
}