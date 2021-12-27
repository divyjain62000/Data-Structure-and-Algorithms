class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) 
    {
        if(node==NULL || (node->left==NULL && node->right==NULL)) return;
        queue<Node*> q;
        q.push(node);
        while(!q.empty()) {
            Node* t=q.front();
            q.pop();
            if(t!=NULL) {
                q.push(t->right);
                q.push(t->left);
                Node* g=t->left;
                t->left=t->right;
                t->right=g;
            }
        }
        
    }
};