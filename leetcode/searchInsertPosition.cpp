class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l=0;
        int r=nums.size()-1;
        int mid=(l+r)/2;
        while(l<=r) {
            mid=(l+r)/2;
            if(nums[mid]==target) return mid;
            if(target<=nums[mid]) {
                r=mid-1;
            }
            else {
                l=mid+1;
            }
        }
        return l;
    }
};