class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        bool dp[n][n];
        int length=1;
        int start=0;
        int end=0;
        for(int g=0;g<n;g++) {
            for(int i=0,j=g;j<n;j++,i++) {
                if(g==0) dp[i][j]=true;
                else if(g==1) 
                {
                    if(s[i]==s[j]) dp[i][j]=true;
                    else dp[i][j]=false;
                }
                else
                {
                    if(s[i]==s[j] && dp[i+1][j-1]==true) dp[i][j]=true;
                    else dp[i][j]=false;
                }
                
                if(dp[i][j]) {
                    length=g+1;
                    start=i;
                    end=j;
                }
            }
        }
        return s.substr(start,length);
    }
};