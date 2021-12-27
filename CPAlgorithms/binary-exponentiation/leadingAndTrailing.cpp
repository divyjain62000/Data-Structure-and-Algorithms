#include<iostream>
using namespace std;
long long binpow(long long a,long long b)
{
if(b==0) return 1;
long long res=binpow(a,b/2);
if(b%2!=0) return res*res;
return res*res*a;
}
string printHelper(long long x)
{
string s=to_string(x);
cout 
int size=s.length();
if(size>=6)
{
string res=s[0]+s[1]+s[2]+"..."+s[size-3]+s[size-2]+s[size-1];
}
return "";
}
int main()
{
int t;
cin>>t;
long long n;
long long k;
for(int i=0;i<t;i++)
{
cin>>n;
cin>>k;
long long res=binpow(n,k);
cout<<printHelper(res);
}
return 0;
}