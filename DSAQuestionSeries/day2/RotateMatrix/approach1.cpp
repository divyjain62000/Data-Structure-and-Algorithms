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
void rotateMatrix(vector<vector<int>> &matrix)
{
int r=matrix.size();
int c=matrix[0].size();
vector<vector<int>> tmp(r);
for(int j=0;j<c;j++)
{
int e=0;
tmp[j]=vector<int>(c);
for(int i=r-1;i>=0;i--)
{
tmp[j][e]=matrix[i][j];
e++;
}
}

for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
matrix[i][j]=tmp[i][j];
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
rotateMatrix(matrix);
printMatrix(matrix);
return 0;
}