/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

vector <int> postOrder(Node* root)
{
vector<int> res;
stack<Node*> stk;
if(root==NULL) return res;
Node *t=root;
while(1)
{
while(t!=NULL)
{
if(t->right!=NULL) stk.push(t->right);
stk.push(t);
t=t->left;
}
t=stk.top();
stk.pop();
if(t->right!=NULL && !stk.empty() && t->right==stk.top())
{
stk.pop();
stk.push(t);
t=t->right;
}
else
{
res.push_back(t->data);
t=NULL;
}
if(stk.empty()) break;
}
return res;
}