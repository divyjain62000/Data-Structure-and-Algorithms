class Solution
{
    void _binaryTreePaths(Node *root,vector<vector<int>> &v,vector<int> tmp)
    {
        if(root==NULL) return;
        tmp.push_back(root->data);  
        if(root->left==NULL && root->right==NULL) { 
            v.push_back(tmp);
            return;
        }
        _binaryTreePaths(root->left,v,tmp);
        _binaryTreePaths(root->right,v,tmp);
    }
vector<vector<int>> Paths(Node* root)
{
    vector<vector<int>> v;
        vector<int> tmp;
        _binaryTreePaths(root,v,tmp);
        return v;
}
};