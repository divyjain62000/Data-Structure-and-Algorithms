//TC -> O(n) SC -> O(1)
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one=0;
        int two=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            one=(one^nums[i]) & (~two);
            two=(two^nums[i]) & (~one);
        }
        return one;
    }
};