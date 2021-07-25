#include<iostream>
#include<string>
using namespace std;
void substring(string s)
{
int len=s.length();
int i;
for(int sublen=0;sublen<=len;sublen++)
{
for(int i=0;i<=len-sublen;i++)
{
int e=i+sublen-1;
int flag=0;
for(int j=i;j<=e;j++)
{
flag=1;
cout<<s[j];
}
if(flag==1) cout<<endl;
}
}

}
int main()
{
string s;
cout<<"Enter a string: ";
cin>>s;
substring(s);
return 0;
}