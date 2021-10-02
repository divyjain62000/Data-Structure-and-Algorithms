#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
map<string,bool> dp;
bool wordBreak(string s,vector<string> &dict)
{
if(find(dict.begin(),dict.end(),s)!=dict.end()) return true;
if(dp.find(s)!=dp.end()) return dp[s];
for(int i=1;i<=s.length();i++)
{
string tmpStr=s.substr(0,i);
if((find(dict.begin(),dict.end(),tmpStr)!=dict.end()) && wordBreak(s.substr(i),dict)) 
{
dp.insert({s,true});
return true;
}
}
dp.insert({s,false});
return false;
}
int main()
{
string str;
cin>>str;
int n;
cin>>n;
vector<string> dict;
for(int i=0;i<n;i++)
{
string s;
cin>>s;
dict.push_back(s);
}
int len=str.length();
cout<<wordBreak(str,dict);
return 0;
}
