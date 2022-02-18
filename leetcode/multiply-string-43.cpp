//TC -> O(n*m) SC -> O(n+m)
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";
        int size1=num1.size();
        int size2=num2.size();
        vector<int> store(size1+size2,0);
        
        int e=0,f=0;
        int carry=0;
        for(int i=size1-1;i>=0;i--) {
            f=0;
            carry=0;
            for(int j=size2-1;j>=0;j--) {
                int res=(num1[i]-'0')*(num2[j]-'0')+store[e+f]+carry;
                carry=res/10;
                store[e+f]=res%10;
                f++;
            }
            if(carry>0) {
                store[e+f]+=carry;
            }
            e++;
        }
    
        int k=store.size()-1;
        while(k>=0 && store[k]==0) k--;
        
        if(k==-1) return "0";
        
        string mul="";
        while(k>=0) {
            mul+=to_string(store[k--]);
        }
        return mul;
    }
};