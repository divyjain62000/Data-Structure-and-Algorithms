class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxEndingHere=0;
        int maxSoFar=INT_MIN;
        for(int i=0;i<nums.size();i++)
        {
            maxEndingHere+=nums[i];
            if(maxSoFar<maxEndingHere)
                maxSoFar=maxEndingHere;
            if(maxEndingHere<0)
                maxEndingHere=0;
        }
        return maxSoFar;
    }
};