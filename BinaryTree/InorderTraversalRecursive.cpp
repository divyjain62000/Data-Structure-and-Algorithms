/*A binary tree node has data, pointer to left child
 and a pointer to right child
struct Node 
{
int data;
Node *left;
Node *right;
Node(int val) 
{
data = val;
left = right = NULL;
}
};*/
class Solution 
{
public:
void _inorder(Node *root,vector<int> &res) 
{
if(root==NULL) return;
_inorder(root->left,res);
res.push_back(root->data);
_inorder(root->right,res);
}
vector<int> inOrder(Node* root) 
{
vector<int> res;
_inorder(root,res);
return res;
}
};
