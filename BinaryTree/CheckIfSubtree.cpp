class Solution
{
  public:
    //Function to check if S is a subtree of tree T.
    bool isIdentical(Node *r1, Node *r2)
    {
        if(r1==NULL && r2==NULL) return true;
        if((r1!=NULL && r2==NULL) || (r1==NULL && r2!=NULL)) return false;
        if(r1->data!=r2->data) return false;
        bool identical=true;
        identical=isIdentical(r1->left,r2->left);
        if(identical==false) return identical;
        identical=isIdentical(r1->right,r2->right);
        return identical;
    }
    
    bool isSubTree(Node* T, Node* S) 
    {
        queue<Node*> q;
        q.push(T);
        while(!q.empty())
        {
            Node* tmp=q.front();
            q.pop();
            if(tmp->data==S->data && isIdentical(tmp,S)) return true;
            if(tmp->left!=NULL) q.push(tmp->left);
            if(tmp->right!=NULL) q.push(tmp->right);
        }
        return false;
    }
};