#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void _diagonalSort(int e,int f,vector<vector<int>>& mat)
{
int m=mat.size();
int n=mat[0].size();
vector<int> tmp;
int i=e;
int j=f;
while(i<m && j<n)
{
tmp.push_back(mat[i][j]);
i++;
j++;
}
sort(tmp.begin(),tmp.end());
int k=0;
i=e;
j=f;
while(i<m && j<n)
{
mat[i][j]=tmp[k];
i++;
j++;
k++;
}
}
vector<vector<int>> diagonalSort(vector<vector<int>>& mat) 
{
int m=mat.size();
int n=mat[0].size();
for(int i=0;i<m;i++)
{
_diagonalSort(i,0,mat);
}
for(int i=1;i<n;i++)
{
_diagonalSort(0,i,mat);
}
return mat;
}
int main()
{
int m,n;
vector<vector<int>> mat;
cin>>m;
cin>>n;
for(int i=0;i<m;i++)
{
int t;
vector<int> v;
for(int j=0;j<n;j++)
{
cin>>t;
v.push_back(t);
}
mat.push_back(v);
}
vector<vector<int>> res=diagonalSort(mat);
for(vector<int> t:res)
{
for(int e:t)
{
cout<<e<<" ";
}
cout<<endl;
}
return 0;
}