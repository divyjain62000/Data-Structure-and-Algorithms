// TC -> O(m*n) SC -> O(1)
#include<iostream>
#include<vector>
using namespace std;
class Solution 
{
public:
bool isSafe(int x,int y,int row,int col)
{
return (x>=0 && x<row && y>=0 && y<col);
}
void gameOfLife(vector<vector<int>>& board) 
{
int row=board.size();
int col=board[0].size(); 
int dx[]={1,1,0,-1,-1,-1,0,1};
int dy[]={0,1,1,1,0,-1,-1,-1};
for(int i=0;i<row;i++)
{
vector<int> v;
for(int j=0;j<col;j++)
{
int live=0;
for(int k=0;k<8;k++)
{
if(isSafe(i+dx[k],j+dy[k],row,col) && abs(board[i+dx[k]][j+dy[k]])==1) live++;
}

if(board[i][j]==0 && live==3)
board[i][j]=2;
if(board[i][j]==1 && (live<2 || live>3))
board[i][j]=-1;

}
}

for(int i=0;i<row;i++)
{
for(int j=0;j<col;j++)
{
board[i][j]=(board[i][j]>0?1:0);
}
}

}
};


int main()
{
int m;
int n;
cin>>m;
cin>>n;
vector<vector<int>> board;
for(int i=0;i<m;i++)
{
vector<int> v;
for(int j=0;j<n;j++)
{
int t;
cin>>t;
v.push_back(t);
}
board.push_back(v);
}
Solution s;
s.gameOfLife(board);
for(vector<int> v:board)
{
for(int e:v)
{
cout<<e<<" ";
}
cout<<endl;
}
return 0;
}