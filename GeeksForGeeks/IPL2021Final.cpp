#include<iostream>
#include<string>
#include<vector>
#include<stack>
using namespace std;
int findMaxLen(string s) {
        int n=s.length();
        stack<pair<char,int>> stk;
        int length=0;
        int validLength=0;
        int lastIndex=0;
        vector<int> res;
        for(int i=0;i<n;i++) {
            if(s[i]=='(') stk.push({s[i],i});
            else if(s[i]==')'){
                pair<char,int> p;
                while(i<n && !stk.empty() && s[i]==')')
                {
                    p=stk.top();
                    stk.pop();
                    i++;
                    validLength+=2;
                } 
                if(p.second==lastIndex+1) {
                    length+=validLength;
                    
                }
                else {
                    length=validLength;
                }
	  i--;  
                lastIndex=i;
                res.push_back(length);
                validLength=0;
            }
        }
        
        int max=res[0];
        for(int i=1;i<res.size();i++) {
            if(max<res[i]) max=res[i];
        }
        return max;
    }

int main()
{
string s;
cin>>s;
cout<<findMaxLen(s);
return 0;
}