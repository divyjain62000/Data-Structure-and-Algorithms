/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode *> q;
        q.push(root);
        q.push(NULL);
        int maxSum=root->val;
        int level=root->val;
        int currLevel=1;
        int sum=0;
        while(!q.empty())
        {
            TreeNode *t=q.front();
            q.pop();
            if(t!=NULL)
            {
                sum+=t->val;
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
            }
            else
            {
                if(!q.empty())
                {
                    if(sum>maxSum)
                    {
                        maxSum=sum;
                        level=currLevel;
                    }
                    
                    q.push(NULL);
                    currLevel++;
                    sum=0;
                }
            }
            
        }
        
            if(sum>maxSum)
            {
                maxSum=sum;
                level=currLevel;
            }
        
        return level;
        
    }
};
