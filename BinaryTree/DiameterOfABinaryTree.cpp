class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int _diameter(Node* root,int &diameter)
    {
        if(root==NULL) return 0;
        int lh=_diameter(root->left,diameter);
        int rh=_diameter(root->right,diameter);
        if(lh+rh+1>diameter) diameter=lh+rh+1;
        return max(lh,rh)+1;
    }
    int diameter(Node* root) {
        int diameter=0;
        _diameter(root,diameter);
        return diameter;
    }
};