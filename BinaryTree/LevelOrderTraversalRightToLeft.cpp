class Solution
{
public:
//Function to return the level order traversal of a tree in righ to left direction.
vector<int> levelOrder(Node* node)
{
queue<Node*> q;
vector<int> res;
if(node==NULL) return res;
q.push(node);
while(!q.empty())
{
Node* t=q.front();
q.pop();
res.push_back(t->data);
if(t->right!=NULL) q.push(t->right);
if(t->left!=NULL) q.push(t->left);
}
return res;
}
};