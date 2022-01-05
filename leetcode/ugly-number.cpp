#include<iostream>
using namespace std;
bool isUgly(int num)
{
if(num<=0) return false;
if(num==1 || num==-1) return true;
while(num!=1)
{
if(num%2==0) num=num/2;
else if(num%3==0) num=num/3;
else if(num%5==0) num=num/5;
else return false;
}
return true;   
}
int main()
{
int n;
cin>>n;
cout<<isUgly(n);
return 0;
}