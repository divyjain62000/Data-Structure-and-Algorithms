x#include<iostream>
#include<string>
#include<stack>
using namespace std;
string removeKdigits(string num, int k) 
{
int n=num.length();
stack<char> stk;
for(char ch:num)
{
while(!stk.empty() && stk.top()>ch && k>0)
{
stk.pop();
k--;
}
stk.push(ch);
}

while(!stk.empty() && k)
{
stk.pop();
k--;
}

while(!stk.empty())
{
num[n-1]=stk.top();
stk.pop();
n--;
}
num=num.substr(n);
int i=0;
while(num.length()>0 && num[i]=='0')
{
    i++;
}
num=num.substr(i);
if(num.length()==0) return "0";
return num;
}
int main()
{
string num;
cin>>num;
int k;
cin>>k;
cout<<removeKdigits(num,k);
return 0;
}
