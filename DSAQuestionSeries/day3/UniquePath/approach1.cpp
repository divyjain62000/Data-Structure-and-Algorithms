#include<iostream>
#include<vector>
using namespace std;
int getTotalUniquePaths(int n,int m)
{
int N=n+m-2;
int r=m-1;
double res=1;
for(int i=1;i<=r;i++)
{
res=res*(N-r+i)/i;
}
return (int)res;
}
int main()
{
int r;
int c;
cout<<"Enter number of rows: ";
cin>>r;
cout<<"Enter number of columns: ";
cin>>c;
cout<<"Total number of unique path which is possible are "<<getTotalUniquePaths(r,c);
return 0;
}