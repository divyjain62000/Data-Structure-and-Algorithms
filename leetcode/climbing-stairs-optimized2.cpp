#include<iostream>
using namespace std;
int climbStairs(int n)
{
if(n==1) return n;
int x=1;
int y=2;
int z;
for(int i=3;i<=n;i++)
{
z=x+y;
x=y;
y=z;
}
return y;
}
int main()
{
int n;
cin>>n;
cout<<climbStairs(n);
return 0;
}