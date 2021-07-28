#include<iostream>
using namespace std;
int factorial(int num)
{
int factorial=1;
for(int i=num;i>=1;i--) factorial*=i;
return factorial;
}
int getValue(int r,int c)
{
if(c==0) return 1;
if(r==c) return 1;
if(c==1) return r;
int value=factorial(r)/(factorial(c)*factorial(r-c));
return value;
}
int main()
{
int r;
int c;
cout<<"Enter row: ";
cin>>r;
cout<<"Enter column: ";
cin>>c;
cout<<"Value at ("<<r<<","<<c<<") is "<<getValue(r,c)<<endl;
return 0;
}