class Solution{
    public:
    // return true/false denoting whether the tree is Symmetric or not
    void _isSymmetric(struct Node* node1,struct Node* node2,bool &symmetric) {
        if(symmetric==false) return;
        if(node1==NULL && node2==NULL) {
            symmetric=true;
            return;
        }
        if(node1==NULL && node2!=NULL) {
            symmetric=false;
            return;
        }
        if(node2==NULL && node1!=NULL) {
            symmetric=false;
            return;
        }
        if(node1->data!=node2->data) {
            symmetric=false;
            return;
        }
        _isSymmetric(node1->left,node2->right,symmetric);
        _isSymmetric(node1->right,node2->left,symmetric);
    }
    bool isSymmetric(struct Node* node)
    {
        if(node==NULL) return true;
        bool symmetric=true;
        _isSymmetric(node->left,node->right,symmetric);
        return symmetric;
    }
};