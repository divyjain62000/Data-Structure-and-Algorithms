#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void shortestPath(vector<int> *adj,int V,int E,int src)
{
queue<int> q;
int distance[V];
for(int i=0;i<V;i++) distance[i]=INT_MAX;
distance[src]=0;
q.push(src);
while(!q.empty())
{
int node=q.front();
q.pop();
for(int it:adj[node])
{
if(distance[node]+1<distance[it]) 
{
distance[it]=distance[node]+1;
q.push(it);
}
}
}
for(int i=0;i<V;i++) 
{
cout<<distance[i]<<" ";
}
}
int main()
{
int V;
int E;
cin>>V;
cin>>E;
vector<int> adj[V];
for(int i=0;i<E;i++)
{
int x,y;
cin>>x;
cin>>y;
adj[x].push_back(y);
adj[y].push_back(x);
}
int src;
int target;
shortestPath(adj,V,E,0);
return 0;
}
/*9
11
0 1
0 3
1 3
3 4
4 5
5 6
1 2
2 6
6 7
7 8
8 6*/
