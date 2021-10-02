class Solution
{
public:
int dp[100][100];
void checkAdjacentX(int i,int j,vector<vector<char>> &grid,int n,int m) {
if(i<0 || j<0 || i>=n || j>=m) return;
if(dp[i][j]==1) return;
dp[i][j]=1;
if(grid[i][j]=='X')//UP
{
checkAdjacentX(i-1,j,grid,n,m); //UP
checkAdjacentX(i+1,j,grid,n,m); //DOWN
checkAdjacentX(i,j-1,grid,n,m); //LEFT
checkAdjacentX(i,j+1,grid,n,m); //RIGHT
}
}
int xShape(vector<vector<char>>& grid) 
{
for(int i=0;i<100;i++) {
for(int j=0;j<100;j++) {
dp[i][j]=0;
} 
}
int n=grid.size();
int m=grid[0].size();
int count=0;
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
if(grid[i][j]=='X' && dp[i][j]==0) 
{
checkAdjacentX(i,j,grid,n,m);
count++;
}
}
}
return count;
}
};