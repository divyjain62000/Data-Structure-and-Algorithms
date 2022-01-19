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
class BSTIterator {
private:
int count=0;
priority_queue<int,vector<int>,greater<int>> pq;

void preorderTraversal(TreeNode *node,priority_queue<int,vector<int>,greater<int>> &pq)
{ 
if(node==NULL) return;
pq.push(node->val);
preorderTraversal(node->left,pq);
preorderTraversal(node->right,pq);
}

public:
BSTIterator(TreeNode* root) 
{
pq.push(-1);
preorderTraversal(root,pq);
}
int next() 
{
pq.pop();
return pq.size()>0?pq.top():-1;
}
bool hasNext() 
{
return pq.size()>1?true:false;
}

};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
