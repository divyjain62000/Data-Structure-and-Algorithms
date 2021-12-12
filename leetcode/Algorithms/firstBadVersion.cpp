class Solution {
public:
    int firstBadVersion(int n) {
        int l=1;
        int h=n;
        int index=-1;
        while(l<=h) 
        {
            int mid=l+(h-l)/2;
            if(isBadVersion(mid)) { 
                index=mid;
                h=mid-1;
            }else {
                l=mid+1;
            }
            
        }
        return index;
    }
};