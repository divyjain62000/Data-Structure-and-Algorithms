void _diagonal(Node *root,int distance,map<int,vector<int>> &m)
{
if(root==NULL) return;
m[distance].push_back(root->data);
_diagonal(root->left,distance+1,m);
_diagonal(root->right,distance,m);
}
vector<int> diagonal(Node *root)
{
 map<int,vector<int>> m;
 vector<int> res;
 if(root==NULL) return res;
 _diagonal(root,0,m);
 for(auto x:m)
 {
 for(int val:x.second) res.push_back(val);
 }
 return res;
}