class Solution {
public:
    void _hasPathSum(Node *root,int S,bool &flag,int tmp)
    {
        if(flag==true) return;
        if(root==NULL) return;
        tmp+=root->val;  
        if(root->left==NULL && root->right==NULL) { 
            if(tmp==S) flag=true;
            return;
        }
        _hasPathSum(root->left,S,flag,tmp);
        _hasPathSum(root->right,S,flag,tmp);
    }
    bool hasPathSum(Node* root, int S) {
     bool flag=false;
        _hasPathSum(root,S,flag,0);
        return flag;
    }
};