// function should print the nodes at k distance from root
void _Kdistance(struct Node *root,int k,vector<int> &res)
{
    if(root==NULL) {
        return;
    }
    if(k==0) {
        res.push_back(root->data);
        return;
    }
    _Kdistance(root->left,k-1,res);
    _Kdistance(root->right,k-1,res);
}

vector<int> Kdistance(struct Node *root, int k)
{
  vector<int> res;
  _Kdistance(root,k,res);
  return res;
}