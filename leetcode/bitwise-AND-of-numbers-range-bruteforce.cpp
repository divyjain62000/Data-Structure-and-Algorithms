#include<iostream>
using namespace std;
int rangeBitwiseAnd(int left,int right)
{
int res=left;
left++;
while(left<=right)
{
res=res&left;
left++;
}
return res;
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