class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int _toSumTree(Node *node) 
    {
        if(node==NULL) return 0;
        int lsum=_toSumTree(node->left);
        int rsum=_toSumTree(node->right);
        int val=lsum+rsum+node->data;
        node->data=lsum+rsum;
        return val;
    }
    void toSumTree(Node *node)
    {
        _toSumTree(node);
    }
};