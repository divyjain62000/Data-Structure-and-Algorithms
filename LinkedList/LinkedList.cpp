#include<iostream>
using namespace std;
class LinkedListNode
{
public:
int data;
LinkedListNode *next;
LinkedListNode(int data)
{
this->data=data;
this->next=NULL;
}
};
class LinkedList
{
public:
LinkedListNode *start;
int count;
LinkedList()
{
this->start=NULL;
this->count=0;
}
void insert(int data)
{
LinkedListNode *node=new LinkedListNode(data);
if(this->start==NULL) this->start=node;
else
{
LinkedListNode *t=this->start;
while(t->next!=NULL)
{
t=t->next;
}
t->next=node;
}
this->count++;
}

void edit(int index,int data)
{
if(index<0 || index>=this->count) 
{
cout<<"Invalid index "<<index<<endl;
return;
}
if(this->start==NULL)
{
cout<<"Invalid index"<<index<<endl;
return;
}
LinkedListNode *t=this->start;
for(int i=0;i<this->count;i++)
{
if(index==i)
{
t->data=data;
}
t=t->next;
}
}

void display()
{
LinkedListNode *t=this->start;
while(t!=NULL)
{
cout<<t->data<<" ";
t=t->next;
}
}

void deleteNode(int index)
{
if(index<0 || index>=this->count) 
{
cout<<"Invalid index "<<index<<endl;
return;
}
if(this->start==NULL)
{
cout<<"Invalid index"<<index<<endl;
return;
}
LinkedListNode *t=this->start;
LinkedListNode *p=this->start;
for(int i=0;i<index;i++)
{
p=t;
t=t->next;
}
p->next=t->next;
if(index==0) this->start=p->next;
delete t;
count--;
}

int getCount()
{
return this->count;
}

};
int main()
{
int choice;
LinkedList linkedList;
while(true)
{
cout<<"\n-----------------"<<endl;
cout<<"      Menu       "<<endl;
cout<<"------------------"<<endl;
cout<<"1. Insert"<<endl;
cout<<"2. Edit"<<endl;
cout<<"3. Display"<<endl;
cout<<"4. Delete"<<endl;
cout<<"5. Total Number Of Elements"<<endl;
cout<<"\nEnter your choice: "<<endl;
cin>>choice;
if(choice==1)
{
cout<<"-----------------"<<endl;
cout<<"      Insert       "<<endl;
cout<<"------------------"<<endl;
int data;
cout<<"Enter data: ";
cin>>data;
linkedList.insert(data);
}else
if(choice==2)
{
cout<<"-------------------"<<endl;
cout<<"      Edit       "<<endl;
cout<<"-------------------"<<endl;
int index;
cout<<"Enter index: ";
cin>>index;
int data;
cout<<"Enter data: ";
cin>>data;
linkedList.edit(index,data);
}else
if(choice==3)
{
cout<<"-------------------"<<endl;
cout<<"      Display       "<<endl;
cout<<"-------------------"<<endl;
linkedList.display();
}else
if(choice==4)
{
cout<<"------------------"<<endl;
cout<<"      Delete       "<<endl;
cout<<"------------------"<<endl;
int index;
cout<<"Enter index: ";
cin>>index;
linkedList.deleteNode(index);
}else
if(choice==5)
{
cout<<"-----------------------------------------"<<endl;
cout<<"      Total Number Of Elements       "<<endl;
cout<<"-----------------------------------------"<<endl;
cout<<linkedList.getCount();
}
}
return 0;
}