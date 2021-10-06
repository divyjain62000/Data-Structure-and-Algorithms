/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */

/*You are required to complete below method */

void _treePathsSum(Node *root,long long n,long long *sum) 
{
if(root==NULL) return;
if(root->left==NULL && root->right==NULL) 
{
*sum=*sum+n+root->data;
return;
}
_treePathsSum(root->left,(n+root->data)*10,sum);
_treePathsSum(root->right,(n+root->data)*10,sum);
}
long long treePathsSum(Node *root)
{
long long sum=0;
long long n=0;
_treePathsSum(root,n,&sum);
return sum;
}
