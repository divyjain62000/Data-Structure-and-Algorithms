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
void setRowZeroes(vector<vector<int>> &matrix,int row,int col,int cols)
{
for(int i=0;i<cols;i++)
{
if(matrix[row][i]!=0) matrix[row][i]=-1;
}

}
void setColumnZeroes(vector<vector<int>> &matrix,int row,int col,int rows)
{
for(int i=0;i<rows;i++) 
{
if(matrix[i][col]!=0)  matrix[i][col]=-1;
}
}
void setZeroes(vector<vector<int>> &matrix)
{
int r=matrix.size();
int c=matrix[0].size();
for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
if(matrix[i][j]==0)
{
setRowZeroes(matrix,i,j,c);
setColumnZeroes(matrix,i,j,r);
}
}
}

for(int i=0;i<r;i++)
{
for(int j=0;j<c;j++)
{
if(matrix[i][j]==-1) matrix[i][j]=0;
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