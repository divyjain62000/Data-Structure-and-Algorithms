class Solution
{
    int sumTree(Node* root,bool &isSumTree) 
    {
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return root->data;
        if(isSumTree==false) {
            return 0;    
        }
        int lsum=sumTree(root->left,isSumTree);
        int rsum=sumTree(root->right,isSumTree);
        if(root->data!=(lsum+rsum)) isSumTree=false;
        return lsum+rsum+root->data;
    }
    public:
    bool isSumTree(Node* root)
    {
        bool isSumTree=true;
         sumTree(root,isSumTree);
         return isSumTree;
    }
};