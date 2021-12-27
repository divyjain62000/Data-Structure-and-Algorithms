class Solution {
int search(vector<int> &nums,int target,int tog)
{
    int low=0;
    int high=nums.size()-1;
    int index=-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(nums[mid]<target) low++;
        else if(nums[mid]>target) high--;
        else {
            index=mid;
            if(tog==-1) high=mid+tog;
            else low=mid+tog;
        }
    }
    return index;
}
    
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> res;
        int s=search(nums,target,-1);
        int e;
        if(s==-1) {
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        else e=search(nums,target,1);
        res.push_back(s);
        res.push_back(e);
        return res;
    }
};