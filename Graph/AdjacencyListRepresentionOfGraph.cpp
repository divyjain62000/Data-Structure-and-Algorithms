#include<iostream>
#include<vector>
using namespace std;
int main()
{
int V,E;
printf("Enter number of vertices: ");
scanf("%d",&V);
printf("Enter number of edges: ");
scanf("%d",&E);
vector<int> adj[V];
int u,v;
for(int i=0;i<E;i++)
{
cin>>u;
cin>>v;
adj[u].push_back(v);
adj[v].push_back(u);
}

for(int i=0;i<V;i++)
{
cout<<i<<" ----> ";
for(int x:adj[i])
{
cout<<x<<" ";
}
cout<<endl;
}
return 0;
}