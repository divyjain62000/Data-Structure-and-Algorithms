class Solution
{
private:
void _KDistanceNodeDown(struct Node *root,int k,vector<int> &res)
{
    if(root==NULL || k<0) {
        return;
    }
    if(k==0) {
        res.push_back(root->data);
        return;
    }
    _KDistanceNodeDown(root->left,k-1,res);
    _KDistanceNodeDown(root->right,k-1,res);
}


int _KDistanceNode(Node* root,int target,int k,vector<int> &res)
{
        if(root==NULL) return -1;
        if(root->data==target) {
            _KDistanceNodeDown(root,k,res);
            return 0;
        }
        
        int dl=_KDistanceNode(root->left,target,k,res);
        if(dl!=-1)
        {
            if(dl+1==k) res.push_back(root->data);
            else _KDistanceNodeDown(root->right,k-dl-2,res);
            return dl+1;
        }
        
        //Mirror of the above code for right subtree
        int dr=_KDistanceNode(root->right,target,k,res);
        if(dr!=-1)
        {
            if(dr+1==k) res.push_back(root->data);
            else _KDistanceNodeDown(root->left,k-dr-2,res);
            return dr+1;
        }
        return -1;
}

public:

    vector <int> KDistanceNodes(Node* root, int target , int k)
    {
        vector<int> res;
        _KDistanceNode(root,target,k,res);
        sort(res.begin(),res.end());
        return res;
    }
};