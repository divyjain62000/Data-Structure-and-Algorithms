class Solution {
    public:
    int longestUniqueSubsttr(string S)
    {
        int m[26];
        for(int i=0;i<26;i++) m[i]=-1;
        int maxLen=0;
        int s=0;
        int i=0;
        for(int i=0;i<S.length();i++)
        {
            char ch=S[i];
            if(m[ch-'a']>-1 && m[ch-'a']>=s) 
            {
                s=m[ch-'a']+1;
            }
            m[ch-'a']=i;
            if(maxLen<i-s+1) maxLen=i-s+1;
        }
        return maxLen;
    }
};