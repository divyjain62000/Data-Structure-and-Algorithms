// TC -> O(R*C)  SC -> O(C)
#include<iostream>
#include<vector>
#include<stack>
using namespace std;
class Solution 
{
public:


int maxHist(vector<int> row)
{
int C=row.size();
stack<int> result;
int top_val; // Top of stack
int max_area = 0; // Initialize max area in current
int area = 0; // Initialize area with current top
int i = 0;
while (i < C) {
if (result.empty() || row[result.top()] <= row[i]) result.push(i++);
else 
{
top_val = row[result.top()];
result.pop();
area = top_val * i;
if (!result.empty()) area = top_val * (i - result.top() - 1);
max_area = max(area, max_area);
}
}
while (!result.empty()) 
{
top_val = row[result.top()];
result.pop();
area = top_val * i;
if (!result.empty()) area = top_val * (i - result.top() - 1);
max_area = max(area, max_area);
}
return max_area;
}


int maximalRectangle(vector<vector<char>>& matrix) 
{
vector<vector<int>> A;
int R=matrix.size();
int C=matrix[0].size();
for (int i = 0; i < R; i++) 
{
vector<int> tmp;
for (int j = 0; j < C; j++)
{
tmp.push_back(matrix[i][j]=='1'?1:0);
}
A.push_back(tmp);
}

int result = maxHist(A[0]);
for (int i = 1; i < R; i++) 
{ 
for (int j = 0; j < C; j++)
if (A[i][j]) A[i][j] += A[i - 1][j];
result = max(result, maxHist(A[i]));
} 
return result;
}
};
int main()
{
int row,col;
vector<vector<char>> matrix;
cin>>row;
cin>>col;
char t;
for(int i=0;i<row;i++)
{
vector<char> v;
for(int j=0;j<col;j++)
{
cin>>t;
v.push_back(t);
}
matrix.push_back(v);
}
Solution s;
cout<<s.maximalRectangle(matrix);
return 0;
}