//To find last right node
Node *findLastRight(Node *root) 
{
if(root->right==NULL) return root;
return findLastRight(root->right);
}

//To adjust node position
Node* deleteHelper(Node *root) 
{
if(root->left==NULL) return root->right;
else if(root->right==NULL) return root->left;
Node *lastRight=findLastRight(root->left);
lastRight->right=root->right;
return root->left;
}

Node *deleteNode(Node *root, int X) 
{
if(root==NULL) return NULL;
else if(root->data==X) 
{
return deleteHelper(root);
}
Node *t=root;
while(t!=NULL) 
{
if(t->data<X) 
{
if(t->right!=NULL && t->right->data==X) 
{
root->left=deleteHelper(root->right);
break;
}
else t=t->right;
}else if(t->data>X){
if(t->left!=NULL && t->left->data==X) 
{
root->left=deleteHelper(root->left);
break;
}
else t=t->left;
}
}
return root;
}