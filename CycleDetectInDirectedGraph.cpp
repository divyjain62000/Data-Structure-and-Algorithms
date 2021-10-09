class Solution 
{
public:
bool isCyclic(int V, vector<int> adj[]) 
{
queue<int> q;
vector<int> indegree(V,0);
for(int i=0;i<V;i++)
{
for(int x:adj[i]) indegree[x]++;
}
for(int i=0;i<V;i++)
{
if(indegree[i]==0) q.push(i);
}
int count=0;
while(!q.empty())
{
int t=q.front();
q.pop();
count++;
for(int x:adj[t])
{
indegree[x]--;
if(indegree[x]==0) q.push(x);
}
}
if(count==V) return false;
return true;
}
};