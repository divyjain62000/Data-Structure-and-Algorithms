// TC -> O(m*n) SC -> O(m*n)
#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
void gameOfLife(vector<vector<int>>& board) 
{
int row=board.size();
int col=board[0].size(); 
vector<vector<int>> res;
for(int i=0;i<row;i++)
{
vector<int> v;
for(int j=0;j<col;j++)
{
int live=0;

if(j-1>=0 && board[i][j-1]==1) live++; //LEFT

if(j+1<col && board[i][j+1]==1) live++; //RIGHT

if(i-1>=0 && board[i-1][j]==1) live++; //UP

if(i+1<row && board[i+1][j]==1) live++; //DOWN

if(i-1>=0 && j-1>=0 && board[i-1][j-1]==1) live++; //UP-LEFT

if(i-1>=0 && j+1<col && board[i-1][j+1]==1) live++; //UP-RIGHT

if(i+1<row && j-1>=0 && board[i+1][j-1]==1) live++; //DOWN-LEFT

if(i+1<row && j+1<col && board[i+1][j+1]==1) live++; //DOWN-RIGHT

if(live<2) v.push_back(0);
else if(live==3) v.push_back(board[i][j]==0?1:board[i][j]);
else if(live==2 || live==3) v.push_back(board[i][j]==1?1:0);
else if(live>3) v.push_back(0);
}
res.push_back(v);
}
board=res;
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