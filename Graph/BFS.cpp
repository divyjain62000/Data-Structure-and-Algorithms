#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void _bfs(vector<int > &adj,vector<bool> &visited,int u)
{
queue<int> q;
q.push(u);
visited[i]=true;
while(!q.empty())
{
int v=q.top();
cout<<v<<" ";
if()

}
}
void bfs(vector<int> &adj,int V)
{
vector<bool> visited(V,false);
for(int i=0;i<V;i++)
{
if(visited[i]==false)
{
_bfs(adj,visited,adj[i]);
}
}
}
int main()
{
int E,V;
cout<<"Enter number of vertices: ";
cin>>V;
vector<int> adj[V];
cout<<"Enter number of Edges: ";
cin>>E;
for(int i=0;i<E;i++)
{
int u,v;
cin>>u>>v;
adj[u]=v;
adj[v]=u;
}
bfs(adj,V,E);
return 0;
}