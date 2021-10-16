

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
vector <int> preorder(Node* root)
{
stack<Node*> stk;
vector<int> res;
if(root==NULL) return res;
stk.push(root);
while(!stk.empty())
{
Node *t=stk.top();
stk.pop();
res.push_back(t->data);
if(root->right!=NULL) stk.push(root->right);
if(root->left!=NULL) stk.push(root->left);
}
return res;
}