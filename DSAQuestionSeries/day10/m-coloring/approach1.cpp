#include<iostream>
#include<vector>
using namespace std;
bool isSafe(int node,vector<int> &color,int V,bool G[101][101],int col)
{
for(int x=0;x<V;x++)
{
if(x!=node && G[x][node]==true && color[x]==col) return false;
}
return true;
}
bool solve(int node,bool G[101][101],vector<int> &color,int V,int m)
{
if(node==V) return true;
for(int i=1;i<=m;i++)
{
if(isSafe(node,color,V,G,i)==true) 
{
color[node]=i;
if(solve(node+1,G,color,V,m)) return true;
color[node]=0;
}
}
return false;
}
bool graphColoring(int V,bool G[101][101],int m)
{
vector<int> color;
for(int i=0;i<V;i++) color.push_back(0);
if(solve(0,G,color,V,m)==true) return true;
return false;
}
int main()
{
int V;
int E;
cout<<"Enter number of vertices: ";
cin>>V;
cout<<"Enter number of edges: ";
cin>>E;
bool G[101][101];
for(int i=0;i<E;i++)
{
int u,v;
cin>>u;
cin>>v;
G[u][v]=true;
G[u][v]=true;
}
cout<<"Enter max color: ";
int m;
cin>>m;
cout<<"Is it possible to color graph: "<<graphColoring(V,G,m);
return 0;
}