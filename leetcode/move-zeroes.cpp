class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        if(n<=1) return;
        int j=0;
        for(int i=0;i<n && j<=n-1;i++)
        {
            if(nums[i]!=0) continue;
            while(j<n && nums[j]==0)
            {
                j++;
            }
            if(j<n) 
            {
                nums[i]=nums[j];
                nums[j]=0;
            }
        }
    }
};