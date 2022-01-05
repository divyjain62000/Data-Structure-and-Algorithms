#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
bool isPowerOfTwo(int n)
{
if(n==0) return false;
return ceil(log2(n))==floor(log2(n));
}
int countPairs(vector<int> &deliciousness)
{
int n=deliciousness.size();
if(n==0) return 0;
int count=0;
for(int i=0;i<n-1;i++)
{
for(int j=i+1;j<n;j++)
{
int sum=deliciousness[i]+deliciousness[j];
if(isPowerOfTwo(sum)) 
{
count++;
cou
}
}
}
return count;
}

int main()
{
int n;
vector<int> deliciousness;
for(int i=0;i<n;i++)
{
int t;
cin>>t;
deliciousness.push_back(t);
}
cout<<countPairs(deliciousness);
return 0;
}