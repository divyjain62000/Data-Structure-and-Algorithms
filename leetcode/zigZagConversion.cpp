class Solution {
public:
    string convert(string s, int numRows) {
        int n=s.length();
        if(numRows==1 || numRows==n) return s;
        string res="";
        if(numRows==2)
        {
            for(int i=0;i<n;i=i+2) res+=s[i];
            for(int i=1;i<n;i=i+2) res+=s[i];
            return res;
        }
        
        vector<string> v;
        for(int k=0;k<numRows;k++)
        {
            v.push_back("");
        }
        int i=0;
        while(1)
        {
            int j=0;
            while(j<numRows && i<n)
            {
                v[j]=v[j]+s[i];
                i++;
                j++;
            }
            j=j-2;
            while(j>0 && i<n)
            {
                v[j]=v[j]+s[i];
                i++;
                j--;
            }
            if(i>=n) break;
        }
        for(string str:v)
        {
            res+=str;
        }
        return res;
    }
};