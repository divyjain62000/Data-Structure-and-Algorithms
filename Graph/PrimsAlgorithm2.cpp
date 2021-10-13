class Solution
{
int spanningTree(int V, vector<vector<int>> adj[])
{
int parent[V+1]; 
int key[V+1]; 
bool mstSet[V+1]; 
for (int i = 0; i <= V; i++) 
key[i] = INT_MAX, mstSet[i] = false; 
priority_queue< pair<int,int>, vector <pair<int,int>> , greater<pair<int,int>> > pq;
key[0] = 0; 
parent[0] = -1; 
pq.push({0, 0});
while(!pq.empty())
{ 
int u = pq.top().second; 
pq.pop(); 
mstSet[u] = true; 
for (auto it : adj[u]) {
int v = it[0];
int weight = it[1];
if (mstSet[v] == false && weight < key[v]) {
parent[v] = u;
key[v] = weight; 
pq.push({key[v], v});
}
}
}
int sum = 0;
for(int i = 1;i<=V;i++) {
if(key[i] != INT_MAX) sum += key[i];
}
return sum; 
}
};