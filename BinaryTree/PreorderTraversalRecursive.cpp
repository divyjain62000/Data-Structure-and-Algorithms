/* A binary tree node has data, pointer to left child
 and a pointer to right child

/*
struct Node
{
int data;
struct Node* left;
struct Node* right;

Node(int x){
data = x;
left = right = NULL;
}
};
*/

//Function to return a list containing the preorder traversal of the tree.
void _preorder(Node* root,vector<int> &res)
{
if(root==NULL) return;
res.push_back(root->data);
_preorder(root->left,res);
_preorder(root->right,res);
}
vector <int> preorder(Node* root)
{
vector<int> res;
_preorder(root,res);
return res;
}