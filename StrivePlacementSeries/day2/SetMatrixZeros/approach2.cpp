#include<iostream>
#include<vector>
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
void setZeroes(vector<vector<int>> &matrix)
{
int r=matrix.size();
int c=matrix[0].size();
vector<int> col(c,-1);
vector<int> row(r,-1);
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
if(matrix[i][j]==0)
{
col[j]=0;
row[i]=0;
}
}
}
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
if(row[i]==0 || col[j]==0)
{
matrix[i][j]=0;
}
}
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
setZeroes(matrix);
printMatrix(matrix);
return 0;
}