class Solution {
public:
    void _permute(vector<int> &nums,int l,int n,vector<vector<int>> &res) {
        if(l==n) {
        vector<int> tmp;
        for(int x:nums) {
            
              tmp.push_back(x);
        }
        res.push_back(tmp);
        }
        for(int i=l;i<n;i++) {
            swap(nums[l],nums[i]);
            _permute(nums,l+1,n,res);
            swap(nums[l],nums[i]);
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        _permute(nums,0,n,res);
        return res;
    }
};