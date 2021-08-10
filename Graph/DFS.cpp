#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void _dfs(vector<int> &adj,vector<int> *graph,vector<bool> &visited)
{
for(int x:adj)
{
if(visited[x]==false) 
{
cout<<x<<" ";
visited[x]=true;
_dfs(graph[x],graph,visited);
}
}
}
void dfs(vector<int> *adj,int V)
{
vector<bool> visited(V,false);
for(int i=0;i<V;i++)
{
if(visited[i]==false) 
{
cout<<i<<" ";
visited[i]=true;
_dfs(adj[i],adj,visited);
}
}
}
int main()
{
int E,V;
cout<<"Enter number of edges: ";
cin>>E;
cout<<"Enter number of vertices: ";
cin>>V;
vector<int> adj[V];
for(int i=0;i<E;i++)
{
int u,v;
cin>>u;
cin>>v;
adj[u].push_back(v);
adj[v].push_back(u);
}
dfs(adj,V);
return 0;
}