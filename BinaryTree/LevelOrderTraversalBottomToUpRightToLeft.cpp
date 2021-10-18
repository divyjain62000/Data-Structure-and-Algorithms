class Solution
{
public:
//Function to return the level order traversal of a tree in bottom up manner and in right to left direction.
vector<int> levelOrder(Node* node)
{
stack<Node*> stk;
queue<Node*> q;
vector<int> res;
if(node==NULL) return res;
q.push(node);
while(!q.empty())
{
Node* t=q.front();
stk.push(t);
q.pop();
if(t->left!=NULL) q.push(t->left);
if(t->right!=NULL) q.push(t->right);
}
while(!stk.empty())
{
res.push_back(stk.top()->data);
stk.pop();
}
return res;
}
};