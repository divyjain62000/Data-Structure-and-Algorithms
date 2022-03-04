class Solution {
public:
    string convertToTitle(int columnNumber) {
        
        string res="";
        while(columnNumber>0) {
            int rem=columnNumber%26;
            
            if(rem==0) {
                res="Z"+res;
                columnNumber=(columnNumber/26)-1;
            }
            else {
                char x=(rem-1)+'A';
                res=x+res;
                columnNumber=columnNumber/26;
            }
        }
        return res;
    }
    };