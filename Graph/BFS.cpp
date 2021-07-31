#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void _bfs(vector<int> &adj,vector<int> *graph,vector<bool> &visited,int V,int u)
{
queue<int> q;
if(visited[u]==false) 
{
q.push(u);
visited[u]=true;
}
while(!q.empty())
{
u=q.front();
q.pop();
cout<<u<<" ";
for(int x:graph[u])
{
if(visited[x]==false) 
{
q.push(x);
visited[x]=true;
}
}
}

}
void bfs(vector<int> *adj,int V)
{
vector<bool> visited(V,false);
for(int i=0;i<V;i++)
{
if(visited[i]==false) _bfs(adj[i],adj,visited,V,i);
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
bfs(adj,V);
return 0;
}