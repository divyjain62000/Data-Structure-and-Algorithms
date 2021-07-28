#include<iostream>
#include<vector>
using namespace std;
bool isElementExists(vector<vector<int>> &matrix,int element)
{
int i,j;
int r=matrix.size();
int c=matrix[0].size();
i=0;
j=c-1;
while(i<r && j>=0)
{
if(element==matrix[i][j]) return true;
else
{
if(element>matrix[i][j]) i++;
else j--;
}
}
return false;
}
int main()
{
int r;
int c;
int element;
vector<vector<int>> matrix(r);
cout<<"Enter element: ";
cin>>element;
cout<<"Enter number of rows: ";
cin>>r;
cout<<"Enter number of columns: ";
cin>>c;
for(int i=0;i<r;i++)
{
matrix[i]=vector<int>(c);
for(int j=0;j<c;j++)
{
int e;
cin>>e;
matrix[i][j]=e;
}
}
cout<<" Is element "<<element<<" present: "<<isElementExists(matrix,element);
return 0;
}