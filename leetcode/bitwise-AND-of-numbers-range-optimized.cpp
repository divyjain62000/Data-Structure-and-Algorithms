#include<iostream>
using namespace std;
int rangeBitwiseAnd(int left,int right)
{
int count=0;
while(left!=right)
{
left=left>>1;
right=right>>1;
count++;
}
return left<<count;
}
int main()
{
int left;
int right;
cin>>left;
cin>>right;
cout<<rangeBitwiseAnd(left,right);
return 0;
}