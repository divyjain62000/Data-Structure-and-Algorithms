class Solution
{
public:
//Function to check whether a binary tree is balanced or not.
int _isBalanced(Node *root,bool &isBalanced)
{
if(root==NULL) return 0;
int lh=_isBalanced(root->left,isBalanced);
int rh=_isBalanced(root->right,isBalanced);
if(abs(lh-rh)>1) isBalanced=false;
return max(lh,rh)+1;
}
bool isBalanced(Node *root)
{
bool isBalanced=true;
_isBalanced(root,isBalanced);
return isBalanced;
}
};