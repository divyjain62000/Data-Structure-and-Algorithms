#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
void _permutation(string str,int n,int i)
{
if(n==i)
{
for(int i=0;i<n;i++) cout<<str[i];
cout<<endl;
return;
}
for(int j=i;j<n;j++)
{
swap(str[i],str[j]);
_permutation(str,n,i+1);
swap(str[i],str[j]);
}
}
void permutation(string str)
{
int n=str.length();
if(n==1) cout<<str;
else _permutation(str,n,0);
}
int main()
{
string str;
cout<<"Enter string: ";
cin>>str;
int n=str.length();
permutation(str);
return 0;
}