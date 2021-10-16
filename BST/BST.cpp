#include<iostream>
#include<queue>
#include<stack>
using namespace std;
class BSTNode
{
public: 
int data;
BSTNode *left;
BSTNode *right;
BSTNode(int data)
{
this->data=data;
this->left=NULL;
this->right=NULL;
}
};

class BST
{
private:
BSTNode *root;
public:
BST()
{
this->root=NULL;
}

 //insert function starts here
void insert(int data)
{
BSTNode *node=new BSTNode(data);
if(this->root==NULL) this->root=node;
else
{
BSTNode *t=this->root;
while(1)
{
if(data<t->data) //insert node in left 
{
if(t->left==NULL) 
{
t->left=	node;
break;
}
else t=t->left;
}
else //insert node in right
{
if(t->right==NULL)
{
t->right=node;
break;
}
else t=t->right;
}
}
}
} //insert function ends here

//preorder recursive functionality starts here
void _preorderRecursive(BSTNode *node)
{
if(node==NULL) return;
cout<<node->data<<" ";
_preorderRecursive(node->left);
_preorderRecursive(node->right);
}
void preorderRecursive()
{
_preorderRecursive(this->root);
}
//preorder recursive functionality ends here

//inorder recursive functionality starts here
void _inorderRecursive(BSTNode *node)
{
if(node==NULL) return;
_inorderRecursive(node->left);
cout<<node->data<<" ";
_inorderRecursive(node->right);
}
void inorderRecursive()
{
_inorderRecursive(this->root);
}
//inorder recursive functionality ends here

//postorder recursive functionality starts here
void _postorderRecursive(BSTNode *node)
{
if(node==NULL) return;
_postorderRecursive(node->left);
_postorderRecursive(node->right);
cout<<node->data<<" ";
}
void postorderRecursive()
{
_postorderRecursive(this->root);
}
//postorder recursive functionality ends here


//preorder iterative function starts here
void preorderIterative()
{
if(this->root==NULL) return;
stack<BSTNode *> s;
s.push(this->root);
while(!s.empty())
{
BSTNode *t=s.top();
s.pop();
if(t!=NULL)
{
cout<<t->data<<" ";
if(t->right!=NULL) s.push(t->right);
if(t->left!=NULL) s.push(t->left);
}
}
}
//preorder iterative function ends here

//inorder iterative function starts here
void inorderIterative()
{
if(this->root==NULL) return;
stack<BSTNode *> s;
BSTNode *t=this->root;
while(t!=NULL)
{
s.push(t);
t=t->left;
}

while(!s.empty())
{
t=s.top();
s.pop();
cout<<t->data<<" ";
t=t->right;
while(t!=NULL)
{
s.push(t);
t=t->left;
}
}
}
//inorder iterative function ends here

//getNumberOfLeafNode function starts here
int  _getNumberOfLeafNode(BSTNode *node)
{
if(node==NULL) return 0;
int count=0;
if(node->left==NULL && node->right==NULL) return 1;
count+=_getNumberOfLeafNode(node->left);
count+=_getNumberOfLeafNode(node->right);
return count;
}
int getNumberOfLeafNode()
{
int leafNodes=0;
leafNodes=_getNumberOfLeafNode(this->root);
return leafNodes;
}
//getNumberOfLeafNode function ends here

};


int main()
{
int choice;
BST bst;

bst.insert(50);
bst.insert(30);
bst.insert(70);
bst.insert(60);
bst.insert(20);
bst.insert(45);
bst.insert(40);




while(1)
{
cout<<"\n--------------------"<<endl;
cout<<"      Main Menu      "<<endl;
cout<<"--------------------"<<endl;
cout<<"1. Insert"<<endl;
cout<<"2. Preorder Recursive"<<endl;
cout<<"3. Inorder Recursive"<<endl;
cout<<"4. Postorder Recursive"<<endl;
cout<<"5. Preorder Iterative"<<endl;
cout<<"6. Inorder Iterative"<<endl;
cout<<"7. Postorder Iterative"<<endl;
cout<<"8. Count leaf node"<<endl;
cout<<"20. Exit"<<endl;
cout<<"\nEnter your choice: ";
cin>>choice;
if(choice<1 || choice>20)
{
cout<<"Invalid choice: "<<choice;
return 0;
}
if(choice==1)
{
cout<<"------------------"<<endl;
cout<<"       Insert      "<<endl;
cout<<"------------------"<<endl;
int data;
cout<<"Enter data: ";
cin>>data;
bst.insert(data);
}else
if(choice==2)
{
cout<<"-------------------------------"<<endl;
cout<<"      Preorder Recursive      "<<endl;
cout<<"-------------------------------"<<endl;
bst.preorderRecursive();
}else
if(choice==3)
{
cout<<"-------------------------------"<<endl;
cout<<"       Inorder Recursive      "<<endl;
cout<<"-------------------------------"<<endl;
bst.inorderRecursive();
}else
if(choice==4)
{
cout<<"---------------------------------"<<endl;
cout<<"       Postorder Recursive      "<<endl;
cout<<"---------------------------------"<<endl;
bst.postorderRecursive();
}else
if(choice==5)
{
cout<<"-------------------------------"<<endl;
cout<<"       Preorder Iterative      "<<endl;
cout<<"-------------------------------"<<endl;
bst.preorderIterative();
}else
if(choice==6)
{
cout<<"-------------------------------"<<endl;
cout<<"        Inorder Iterative      "<<endl;
cout<<"-------------------------------"<<endl;
bst.inorderIterative();
}else
if(choice==8)
{
cout<<"-------------------------------"<<endl;
cout<<"        Count Leaf Node       "<<endl;
cout<<"-------------------------------"<<endl;
int leafNodes=bst.getNumberOfLeafNode();
cout<<"Total number of leaf node are "<<leafNodes;
}else
if(choice==20) break;
}
return 0;
}