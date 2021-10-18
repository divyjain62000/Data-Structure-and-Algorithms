class Solution
{
public:
//Function to store the zig zag order traversal of tree in a list.
vector <int> zigZagTraversal(Node* root)
{
stack<Node*> stk1;
stack<Node*> stk2;
vector<int> res;
if(root==NULL) return res;
stk1.push(root);
while(!stk1.empty() || !stk2.empty())
{
while(!stk1.empty())
{
Node* t=stk1.top();
stk1.pop();
res.push_back(t->data);
if(t->left!=NULL) stk2.push(t->left);
if(t->right!=NULL) stk2.push(t->right);
}
while(!stk2.empty())
{
Node* t=stk2.top();
stk2.pop();
res.push_back(t->data);
if(t->right!=NULL) stk1.push(t->right);
if(t->left!=NULL) stk1.push(t->left);
}
}
return res;
}
};