#include<stdio.h>
#include<stdlib.h>
int main()
{
int V,E;
printf("Enter number of vertices: ");
scanf("%d",&V);
printf("Enter number of edges: ");
scanf("%d",&E);
int u,v;
int **graph;
graph=(int **)malloc(sizeof(int *)*V);
for(int i=0;i<V;i++)
{
graph[i]=(int *)malloc(sizeof(int)*V);
}
for(int i=0;i<V;i++)
{
for(int j=0;j<V;j++)
{
graph[i][j]=0;
}
}
for(int i=0;i<E;i++)
{
scanf("%d",&u);
scanf("%d",&v);
graph[u][v]=1;
graph[v][u]=1;
}
printf("Adjacency Matrix Representation: \n");
for(int i=0;i<V;i++)
{
for(int j=0;j<V;j++)
{
printf("%2d",graph[i][j]);
}
printf("\n");
}
return 0;
}