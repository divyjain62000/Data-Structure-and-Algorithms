#include<iostream>
#include<algorithm>
using namespace std;
double multiply(double number,int n)
{
double ans=1.0;
for(int i=1;i<=n;i++)  ans*=number;
return ans;
}
double findNRoot(int n,int m)
{
double low=1;
double high=m;
double eps=1e-6;
while((high-low)>eps)
{
double mid=(low+high)/2.0;
if(multiply(mid,n)<m) low=mid;
else high=mid;
}
return low;
}

int main()
{
int n,m;
cout<<"Enter n: ";
cin>>n;
cout<<"Enter number: ";
cin>>m;
cout<<findNRoot(n,m);
return 0;
}