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
bool col0=true;
for(int i=0;i<r;i++)
{
if(matrix[i][0]==0) col0=false;
for(int j=1;j<c;j++)
{
if(matrix[i][j]==0)
{
matrix[i][0]=0;
matrix[0][j]=0;
}
}
}

for(int i=r-1;i>=0;i--)
{
for(int j=c-1;j>=1;j--)
{
if(matrix[i][0]==0 || matrix[0][j]==0) matrix[i][j]=0;
}
if(col0==false) matrix[i][0]=0;
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