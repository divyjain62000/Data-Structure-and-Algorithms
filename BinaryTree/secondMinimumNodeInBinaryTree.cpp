class Solution {
public:
    void _findSecondMinimumValue(TreeNode *root,int &min,long &secondMin) {
        if(root==NULL) return;
        if(root->val<secondMin && root->val>min)
        {
            secondMin=root->val;
        }
        _findSecondMinimumValue(root->left,min,secondMin);
        _findSecondMinimumValue(root->right,min,secondMin);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        if(root==NULL) return -1;
        int min=root->val;
        long secondMin=LONG_MAX;
        _findSecondMinimumValue(root,min,secondMin);
        if(secondMin==LONG_MAX) return -1;
        if(min==secondMin) return -1;
        return secondMin;
    }
};
