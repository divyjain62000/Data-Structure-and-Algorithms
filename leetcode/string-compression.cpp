// TC -> O(n*log(n))  SC -> O(1)
class Solution {
public:
    int compress(vector<char>& chars) {
        int i,j,k;
        i=0;
        j=0;
        k=i;
        int n=chars.size();
        int count=0;
        while(i<n && j<n) {
            while(j<n && chars[i]==chars[j]) {
                count++;
                j++;
            }
            if(count==1) {
                chars[k]=chars[i];
                k++;
            }
            else if(count>1) {
                chars[k]=chars[i];
                string num=to_string(count);
                k++;
                for(char ch:num){
                    chars[k]=ch;
                    k++;
                }
            }
            count=0;
            i=j;
        }
        return k;
    }
};