void findTopoSort(int node,vector<int> &vis,vector<int> &st,vector<int> adj[])
{
vis[node]=1;
for(int it:adj[node])
{
if(vis[it]==0) findtopoSort(it,vis,st,adj);
}
st.push_back(node);
}
public:
vector<int> topoSort(int V, vector<int> adj[]) 
{
vector<int> vis(V,0);
vector<int> st;
for(int i=0;i<V;i++)
{
if(vis[i]==0)
{
findTopoSort(i,vis,st,adj);
}
}
vector<int> topo;
while(!st.empty())
{
topo.push_back(st.top());
st.pop();
}
return topo;
}
