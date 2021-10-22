class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root) 
    {
        vector<int> res;
        if(root==NULL) return res;//Base condition

        queue<pair<Node*,int>> q; //store Node along with col in which this node is present
        map<int,int> m; // we use map to add element at particular column
        q.push({root,0});
        while(!q.empty())
        {
            pair<Node*,int> p=q.front();
            
            /*check if key is not exists then we add element against that key*/
                if(m.find(p.second)==m.end()) m[p.second]=p.first->data; 
                q.pop();
                if(p.first->left!=NULL) q.push({p.first->left,p.second-1}); //insert left child and decrease col by 1
                if(p.first->right!=NULL) q.push({p.first->right,p.second+1}); //insert right child and increase col by 1
        }
        for(auto x:m) res.push_back(x.second);
        return res;
    }
};