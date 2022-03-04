#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class MyStack {

private:
int maxEle;
class Element {
public:
int val;
Element(int val) {
this->val=val;
}
};

deque<Element> stk;
deque<Element> aux;

public:

MyStack() {
this->maxEle=0;
}

void push(int number) {
int m=number;
this->maxEle=max(number,maxEle);
Element e(number);
stk.push_back(e);
}

int pop() { 
int ele=stk.back().val;
return ele;
}

int top() { 
return stk.back().val;
}

int peekMax() {
return maxEle;
}

int popMax() {
int popEle=-1;
while(!stk.empty() && maxEle!=stk.back().val) {
aux.push_back(stk.back());
stk.pop_back();
}

if(!stk.empty()) {
popEle=stk.back().val;
stk.pop_back();
}

while(!aux.empty()) {
stk.push_back(aux.back());
aux.pop_back();
}

return popEle;
}

};


int main()
{
MyStack ms;
while(1)
{
cout<<"-------------------"<<endl;
cout<<"        Menu       "<<endl;
cout<<"-------------------"<<endl;
cout<<"1. Push"<<endl;
cout<<"2. Pop"<<endl;
cout<<"3. Top"<<endl;
cout<<"4. Peek max"<<endl;
cout<<"5. Pop max"<<endl;
cout<<"6. Exit"<<endl;
int choice;
cout<<"Enter your choice: ";
cin>>choice;

if(choice==1)
{
int number;
cout<<"Enter number: ";
cin>>number;
ms.push(number);
}
else if(choice==2)
{
int x=ms.pop();
cout<<"Pop element: "<<x<<endl;
}
else if(choice==3)
{
int x=ms.top();
cout<<"Top element: "<<x<<endl;
}
else if(choice==4)
{
int x=ms.peekMax();
cout<<"Peek max element: "<<x<<endl;
}
else if(choice==5)
{
int x=ms.popMax();
cout<<"Pop max element: "<<x<<endl;
}
if(choice==6) break;
}

return 0;
}