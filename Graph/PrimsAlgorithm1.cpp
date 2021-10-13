class Solution
{
public:
int spanningTree(int V, vector<vector<int>> adj[])
{
int key[V];
int parent[V];
bool mstSet[V];
for(int i=0;i<V;i++) 
{
key[i]=INT_MAX;
parent[i]=-1;
mstSet[i]=false;
}
key[0]=0;
for(int i=0;i<V-1;i++)
{
int mini=INT_MAX,u;
for(int v=0;v<V;v++)
{
if(mstSet[v]==false && key[v]<mini) mini=key[v],u=v;
}
mstSet[u]=true;
for(auto it:adj[u])
{
int v=it[0];
int weight=it[1];
if(mstSet[v]==false && weight<key[v]) parent[v]=u,key[v]=weight;
}
}
return accumulate(key,key+V,0);
}
};