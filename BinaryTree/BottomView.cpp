/*Code is same as Top View the only difference is in top view we check for particular key if value exists in map we do not insert value against that key
but in Bottom View we always insert value in map*/
class Solution 
{
  public:
    vector <int> bottomView(Node *root) 
    {
        vector<int> res;
        if(root==NULL) return res;//Base condition

        queue<pair<Node*,int>> q; //store Node along with col in which this node is present
        map<int,int> m; // we use map to add element at particular column
        q.push({root,0});
        while(!q.empty())
        {
            pair<Node*,int> p=q.front();
            
            m[p.second]=p.first->data; 
            q.pop();

                if(p.first->left!=NULL) q.push({p.first->left,p.second-1}); //insert left child and decrease col by 1
                if(p.first->right!=NULL) q.push({p.first->right,p.second+1}); //insert right child and increase col by 1
        }
        for(auto x:m) res.push_back(x.second);
        return res;
    }
};