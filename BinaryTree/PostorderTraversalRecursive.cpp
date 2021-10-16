/* A binary tree node has data, pointer to left child
 and a pointer to right child
struct Node
{
int data;
struct Node* left;
struct Node* right;
}; */

//Function to return a list containing the postorder traversal of the tree.
void _postOrder(Node *root,vector<int> &res)
{
if(root==NULL) return;
_postOrder(root->left,res);
_postOrder(root->right,res);
res.push_back(root->data);
}
vector <int> postOrder(Node* root)
{
vector<int> res;
_postOrder(root,res);
return res;
}
