class Solution
{
public:
//Function to find the height of a binary tree.
int height(struct Node* node)
{
if(node==NULL) return 1;
if(node->left==NULL && node->right==NULL) return 1;
int d1=1;
int d2=1;
d1+=height(node->left);
d2+=height(node->right);
return d1>d2?d1:d2;
}
};