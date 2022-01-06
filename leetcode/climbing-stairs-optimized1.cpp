//TC -> O(n) SC -> O(n)
#include<iostream>
using namespace std;
int climbStairs(int n)
{
if(n==1) return n;
int store[n+1];
store[1]=1;
store[2]=2;
for(int i=3;i<=n;i++)
{
store[i]=store[i-1]+store[i-2];
}
return store[n];
}
int main()
{
int n;
cin>>n;
cout<<climbStairs(n);
return 0;
}