#include<iostream>
#include<vector>
#include<stack>
using namespace std;
int maxRectangleArea(int n,vector<int> heights)
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
int main()
{
int n;
cin>>n;
vector<int> heights;
for(int i=0;i<n;i++)
{
int e;
cin>>e;
heights.push_back(e);
}
cout<<maxRectangleArea(n,heights);
return 0;
}

