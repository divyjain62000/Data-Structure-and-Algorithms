#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void findTopo(int src,vector<int> &vis,stack<int> &stk,vector<pair<int,int>> *adj)
{
vis[src]=1;
for(auto it: adj[src])
{
if(!vis[it.first]) findTopo(it.first,vis,stk,adj);
}
stk.push(src);
}
void shortestPath(vector<pair<int,int>> *adj,int V,int E,int src)
{
vector<int> vis(V,0);
stack<int> stk;
for(int i=0;i<V;i++)
{
if(!vis[i]) findTopo(i,vis,stk,adj);
}

int distance[V];
for(int i=0;i<V;i++) distance[i]=INT_MAX;
distance[src]=0;
stk.push(src);
while(!stk.empty())
{
int node=stk.top();
stk.pop();
if(distance[node]!=INT_MAX) 
{
for(auto it:adj[node])
{
if(distance[it.first]>distance[node]+it.second)
{
distance[it.first]=distance[node]+it.second;
}
}
}
}
for(int i=0;i<V;i++) 
{
(distance[i]==INT_MAX)?cout<<"INF ":cout<<distance[i]<<" ";
}
}
int main()
{
int V;
int E;
cin>>V;
cin>>E;
vector<pair<int,int>> adj[V];
for(int i=0;i<E;i++)
{
int x,y,w;
cin>>x;
cin>>y;
cin>>w;
adj[x].push_back({y,w});
}
int src;
int target;
shortestPath(adj,V,E,0);
return 0;
}
/*
6
7
0 1 2
0 4 1
1 2 3
4 2 2
4 5 4
2 3 6
5 3 1*/
