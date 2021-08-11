#include<iostream>
#include<vector>
#include<string>
using namespace std;
void solve(int col,int n,vector<string> &board,vector<vector<string>> &ans,vector<int> &upperDiagonal,vector<int> &lowerDiagonal,vector<int> &leftRow)
{
if(col==n)
{
ans.push_back(board);
return;
}
for(int row=0;row<n;row++)
{
if(upperDiagonal[n-1+col-row]==0 && lowerDiagonal[row+col]==0 && leftRow[row]==0) 
{
board[row][col]='Q';
upperDiagonal[n-1+col-row]=1;
lowerDiagonal[row+col]=1;
leftRow[row]=1;
solve(col+1,n,board,ans,upperDiagonal,lowerDiagonal,leftRow);
board[row][col]='-';
upperDiagonal[n-1+col-row]=0;
lowerDiagonal[row+col]=0;
leftRow[row]=0;
}
}
}

vector<vector<string>> solveNQueen(int n)
{
vector<vector<string>> ans;
vector<string> board(n);
vector<int> upperDiagonal(2*n-1,0);
vector<int> lowerDiagonal(2*n-1,0);
vector<int> leftRow(n,0);
string s(n,'-');
for(int i=0;i<n;i++) board[i]=s;
solve(0,n,board,ans,upperDiagonal,lowerDiagonal,leftRow);
return ans;
}
int main()
{
int n;
cout<<"Enter number of queens: ";
cin>>n;
vector<vector<string>> res=solveNQueen(n);
for(vector<string> vct:res)
{
for(string s:vct)
{
cout<<s<<endl;
}
cout<<"*************"<<endl;
}
return 0;
}