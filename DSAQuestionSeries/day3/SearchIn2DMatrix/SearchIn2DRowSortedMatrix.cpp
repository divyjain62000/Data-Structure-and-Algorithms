#include<iostream>
#include<vector>
using namespace std;
bool isElementExists(vector<vector<int>> &matrix,int element)
{
int low=0;
int n=matrix.size();
int m=matrix[0].size();
int high=n*m-1;
while(low<=high)
{
int mid=(low+(high-low)/2);
if(matrix[mid/m][mid%m]==element) return true;
if(matrix[mid/m][mid%m]<element) low=mid+1;
else high=mid-1;
}
return 0;
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