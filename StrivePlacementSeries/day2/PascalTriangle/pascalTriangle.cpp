#include<iostream>
#include<vector>
using namespace std;
int main()
{
int n;
cout<<"Enter number of rows you want to generate: ";
cin>>n;
vector<vector<int>> v(n);
for(int i=0;i<n;i++)
{
int s=i+1;
v[i].resize(s);
for(int j=0;j<s;j++)
{
if(j==0 || j==s-1) v[i][j]=1;
else v[i][j]=v[i-1][j-1]+v[i-1][j];
}
}
for(vector<int> vct:v)
{
for(int x:vct)
{
cout<<x<<" ";
}
cout<<endl;
}
return 0;
}