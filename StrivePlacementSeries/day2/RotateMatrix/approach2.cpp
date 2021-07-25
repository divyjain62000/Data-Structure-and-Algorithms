#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void printMatrix(vector<vector<int>> &matrix)
{
int r=matrix.size();
int c=matrix[0].size();
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
cout<<matrix[i][j]<<" ";
}
cout<<endl;
}
}
void rotateMatrix(vector<vector<int>> &matrix)
{
int r=matrix.size();
int c=matrix[0].size();
for(int i=0;i<r;i++)
{
for(int j=0;j<i;j++)
{
int g=matrix[i][j];
matrix[i][j]=matrix[j][i];
matrix[j][i]=g;
}
}
for(int i=0;i<r;i++)
{
reverse(matrix[i].begin(),matrix[i].end());
}
}
int main()
{
int r;
int c;
cout<<"Enter number of rows: ";
cin>>r;
cout<<"Enter number of columns: ";
cin>>c;
vector<vector<int>> matrix(r);
cout<<"Enter elements of matrix: "<<endl;
for(int i=0;i<r;i++)
{
matrix[i] = vector<int>(c);
for(int j=0;j<c;j++)
{
cin>>matrix[i][j];
}
}
rotateMatrix(matrix);
printMatrix(matrix);
return 0;
}