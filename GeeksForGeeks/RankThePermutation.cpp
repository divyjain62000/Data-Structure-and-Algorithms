class Solution{
    void calculateFactorial(vector<int> &fact,int n)
    {
        fact[0]=1;
        fact[1]=1;
        for(int i=2;i<n;i++) {
            fact[i]=i*fact[i-1]%1000003;
        }
    }
public:
    int rank(string str){
        string s=str;
        sort(s.begin(),s.end());
        int n=str.length();
        for(int i=0;i<n-1;i++) {
            if(s[i]==s[i+1]) return 0;
        }
        
        vector<bool> check(n,false);
        vector<int> fact(n);
        int ind=0;
        calculateFactorial(fact,n);
        long long int rank=0;
        for(int i=0;i<n;i++) {
            if(check[i]==true) continue;
            else if(str[ind]!=s[i]) {
                rank+=fact[n-ind-1];
            }
            else
            {
                check[i]=true;
                ind++;
                i=-1;
            }
        }
        return (rank+1)%1000003;
    }
};