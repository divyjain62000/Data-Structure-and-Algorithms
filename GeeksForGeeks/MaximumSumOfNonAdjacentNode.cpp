class Solution{
public:

unordered_map<Node *,int> dp;
//Function to return the maximum sum of non-adjacent nodes.
int getMaxSum(Node *root) 
{
if(!root) return 0;
if(dp.find(root)!=dp.end()) return dp[root]; //memoization
int inc=root->data;
int exc=0;
if(root->left!=NULL)
{
inc+=getMaxSum(root->left->left);
inc+=getMaxSum(root->left->right);
}
if(root->right!=NULL)
{
inc+=getMaxSum(root->right->left);
inc+=getMaxSum(root->right->right);
}

exc=getMaxSum(root->left)+getMaxSum(root->right);
dp.insert({root,max(inc,exc)});
return dp[root];
}
};