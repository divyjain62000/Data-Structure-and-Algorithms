class Solution
{
public:
//Function to find the vertical order traversal of Binary Tree.
vector<int> verticalOrder(Node *root)
{
vector<int> res;
if(root==NULL) return res;
map<int,vector<int>> m;
queue<pair<Node*,int>> q;
q.push({root,0});
while(!q.empty())
{
pair<Node*,int> p=q.front();
Node *t=p.first;
int col=p.second;
q.pop();
m[col].push_back(t->data);
if(t->left!=NULL) q.push({t->left,col-1});
if(t->right!=NULL) q.push({t->right,col+1});
}
for(auto val:m) {
for(int x:val.second) res.push_back(x);
}
return res;
}
};