#include<iostream>
#include<stack>
using namespace std;
struct Node
{
int data;
struct Node *left;
struct Node *right;
};
struct Node *root=NULL;
stack<Node *> stk;

int getHeight(struct Node* node);
struct Node* createNode(int data)
{
struct Node* node=(struct Node *)malloc(sizeof(struct Node));
node->data=data;
node->left=NULL;
node->right=NULL;
}

void balanceTheAVLTree()
{

} //balanceTheAVLTree function ends here


void insert(int data)
{
struct Node *node=createNode(data);
if(root==NULL) root=node;
else
{
struct Node *t=root;
while(t->left!=NULL && t->right!=NULL)
{
if(t->data==node->data) return;
stk.push(t);
if(t->data>node->data) t=t->left; //move in left side
else  t=t->right; //move in right side
}
stk.push(t);
if(t->data>node->data) t->left=node;
else t->right=node;
}
balanceTheAVLTree();
}//insert function ends here

void print()
{
if(root==NULL) cout<<"Root: NULL"<<endl;
else cout<<"Root: "<<root->data<<endl;
}//print function ends here

int getHeight(struct Node *node)
{
if(node==NULL) return 0;
int leftHeight=getHeight(node->left);
int rightHeight=getHeight(node->right);
return 1+(leftHeight>rightHeight?leftHeight:rightHeight);
} //getHeight function ends here


int main()
{
int choice;
while(1)
{
cout<<"--------------------------------------"<<endl;
cout<<"                    MENU"<<endl;
cout<<"--------------------------------------"<<endl;
cout<<"1. Insert"<<endl;
cout<<"2. Print"<<endl;
cout<<"3. Height of tree"<<endl;
cout<<"10. Exit"<<endl;
cout<<"Enter your choice: ";
cin>>choice;
if(choice<=0 || choice>10) cout<<"Invalid choice"<<endl;
if(choice==1)
{
cout<<"Enter data: ";
int ele;
cin>>ele;
insert(ele);
}
if(choice==2) print();	
if(choice==3) cout<<getHeight(root)<<endl;
if(choice==10) break;
}
return 0;
}