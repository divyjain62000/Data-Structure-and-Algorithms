#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int _maxRectangleArea(int n,vector<int> heights)
{
stack<int> stk;
int left[n];
int right[n];
for(int i=0;i<n;i++)
{
if(stk.empty()) 
{
left[i]=0;
stk.push(i);
}
else
{
while(!stk.empty() && heights[stk.top()]>=heights[i])
{
stk.pop();
}
if(stk.empty()) left[i]=0;
else left[i]=stk.top()+1;
stk.push(i);
}
}
while(!stk.empty()) stk.pop();
for(int i=n-1;i>=0;i--)
{
if(stk.empty()) 
{
right[i]=n-1;
stk.push(i);
}
else
{
while(!stk.empty() && heights[stk.top()]>=heights[i])
{
stk.pop();
}
if(stk.empty()) right[i]=n-1;
else right[i]=stk.top()-1;
stk.push(i);
}
}
int maxArea=heights[0]*(right[0]-left[0]+1);
for(int i=1;i<n;i++)
{
maxArea=max(maxArea,heights[i]*(right[i]-left[i]+1));
}
return maxArea;
}
int maxRectangleArea(int m,int n,vector<int> mat[])
{
vector<int> heights;
for(int i=0;i<n;i++) heights.push_back(mat[0][i]);
int maxArea=_maxRectangleArea(n,mat[0]);
for(int i=1;i<m;i++)
{
int j=0;
for(int x:mat[i])
{
if(x==0) heights[j]=0;
else heights[j]=heights[j]+x;
j++;
}
maxArea=max(maxArea,_maxRectangleArea(n,heights));
}
return maxArea;
}
int main()
{
int m;
cin>>m;
int n;
cin>>n;
vector<int> mat[n];
for(int i=0;i<m;i++)
{
for(int j=0;j<n;j++)
{
int e;
cin>>e;
mat[i].push_back(e);
}
}
cout<<maxRectangleArea(m,n,mat);
return 0;
}

