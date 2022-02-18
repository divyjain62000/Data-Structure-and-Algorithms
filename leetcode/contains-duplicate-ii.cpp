//TC -> O(n) SC -> O(n)
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int> m;
        int n=nums.size();
        for(int i=0;i<n;i++) {
            if(m.find(nums[i])!=m.end() && abs(m[nums[i]]-i)<=k) return true;
            else m[nums[i]]=i;
        }
        return false;
    }
};