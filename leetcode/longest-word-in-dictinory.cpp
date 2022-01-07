#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<unordered_set>
using namespace std;
string longestWord(vector<string>& words) 
{
sort(words.begin(),words.end());
unordered_set<string> us;
string result="";
for(string w:words)
{
if(w.length()==1 || us.find(w.substr(0,w.length()-1))!=us.end())
{
if(w.length()>result.length()) result=w;
us.insert(w);
}
}
return result;       
}
int main()
{
int n;
cin>>n;
vector<string> words;
for(int i=0;i<n;i++)
{
string s;
cin>>s;
words.push_back(s);
}
cout<<longestWord(words);
return 0;
}