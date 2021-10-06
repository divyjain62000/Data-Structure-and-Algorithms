class Solution {
public:
// Function to detect cycle in an undirected graph.
bool isCycleBFS(int v,vector<int> adj[],int u,bool *visited)
{
queue<pair<int,int>> q;
visited[u]=true;
q.push({u,-1});
while(!q.empty())
{
int node=q.front().first;
int parent=q.front().second;
q.pop();
for(int x:adj[node])
{
if(!visited[x]) 
{
visited[x]=true;
q.push({x,node});
} 
else if(x!=parent) 
{
return true;
}
}
} 
return false;
}
bool isCycle(int V, vector<int> adj[]) 
{
bool visited[V]={false};
for(int i=0;i<V;i++) 
{
if(!visited[i]) 
{
if(isCycleBFS(V,adj,i,visited)) return true;
}
}
return false;
}
};