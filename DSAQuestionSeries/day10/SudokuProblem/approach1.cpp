#include<iostream>
#include<vector>
using namespace std;
bool solve(vector<vector<char>> &board);
bool isValid(int row,int col,vector<vector<char>> &board,char c);
void sudokuSolver(vector<vector<char>> &board)
{
solve(board);
cout<<"\nSolved board: \n";
for(vector<char> v: board)
{
for(char x:v) cout<<x<<" ";
cout<<endl;
}
}
bool solve(vector<vector<char>> &board)
{
for(int i=0;i<board.size();i++)
{
for(int j=0;j<9;j++)
{
if(board[i][j]=='.')
{
for(char c='1';c<='9';c++) 
{
if(isValid(i,j,board,c)) 
{
board[i][j]=c;
if(solve(board)==true) return true;
else board[i][j]='.';
}
}
return false;	
}
}
}
return true;
}

bool isValid(int row,int col,vector<vector<char>> &board,char c)
{
for(int i=0;i<9;i++)
{
if(board[row][i]==c) return false;
if(board[i][col]==c) return false;
if(board[3*(row/3)+i/3][3*(col/3)+i%3]==c) return false;
}
return true;
}

int main()
{
vector<vector<char>> board(9);
cout<<"Fill board: \n";
for(int i=0;i<9;i++)
{
board[i]=vector<char>(0);
for(int j=0;j<9;j++)
{
char e;
cin>>e;
board[i].push_back(e);
}
}
sudokuSolver(board);
return 0;
}

/*
5 3 . . 7 . . . .
6 . . 1 9 5 . . .
. 9 8 . . . . 6 .
8 . . . 6 . . . 3
4 . . 8 . 3 . . 1
7 . . . 2 . . . 6
. 6 . . . . 2 8 .
. . . 4 1 9 . . 5
. . . . 8 . . 7 9
*/