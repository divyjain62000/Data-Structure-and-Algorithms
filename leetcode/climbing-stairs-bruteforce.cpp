//TC -> O(2^n) SC -> O(n)
#include<iostream>
using namespace std;
int _climbStairs(int i,int n)
{
if(i>n) return 0;
if(i==n) return 1;
return _climbStairs(i+1,n)+_climbStairs(i+2,n);
}
int climbStairs(int n)
{
return _climbStairs(0,n);
}
int main()
{
int n;
cin>>n;
cout<<climbStairs(n);
return 0;
}