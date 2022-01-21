class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=0;
        int n=nums.size();
        while(j<n && nums[j]==val) j++;
        while(i<n && j<n)
        {
            swap(nums[i],nums[j]);
            i++;
            j++;
            while(j<n && nums[j]==val) j++;
        }
        
        int k=0;
        while(k<n && nums[k]!=val) k++;
        return k;
    }
};