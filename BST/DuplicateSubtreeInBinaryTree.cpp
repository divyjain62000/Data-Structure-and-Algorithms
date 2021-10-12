class Solution 
{
unordered_map<string,int> m;
string _dupSub(Node *root)
{
if(!root) return "$";
string s="";
if(!root->left && !root->right) return to_string(root->data);
s+=to_string(root->data);
s+=_dupSub(root->left);
s+=_dupSub(root->right);
m[s]++;
return s;
}
public:
int dupSub(Node *root) 
{
_dupSub(root);
for(auto x:m) 
{
if(x.second>=2) return 1;
}
return 0;
}
};