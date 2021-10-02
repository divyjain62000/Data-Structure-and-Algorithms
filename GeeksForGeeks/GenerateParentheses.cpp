#include<iostream>
#include<vector>
#include<string>
using namespace std;
void generateParantheses(string p,int n,int open,int close,vector<string>& allParenthesis)
{
if(p.length()==2*n)
{
allParenthesis.push_back(p);
}
if(open<n) generateParantheses(p+"(",n,open+1,close,allParenthesis);
if(close<open) generateParantheses(p+")",n,open,close+1,allParenthesis);
}

vector<string> AllParenthesis(int n)
{
vector<string> allParenthesis;
generateParantheses("(",n,1,0,allParenthesis);
return allParenthesis;
}
int main()
{
int n;
cin>>n;
vector<string> allParenthesis= AllParenthesis(n);
for(string s:allParenthesis)
{
cout<<s<<endl;
}
return 0;
}