class Solution
{
public:
vector <int> dijkstra(int V, vector<vector<int>> adj[], int S)
{
vector<int> dist(V+1,INT_MAX);
priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
dist[S]=0;
pq.push(make_pair(0,S));
while(!pq.empty())
{
int d=pq.top().first;
int prev=pq.top().second;
pq.pop();
for(auto it:adj[prev]) 
{
int next=it[0];
int nextDist=it[1];
if(dist[next]>dist[prev]+nextDist)
{
dist[next]=dist[prev]+nextDist;
pq.push(make_pair(dist[next],next));
}
}
}
return dist;
}
};