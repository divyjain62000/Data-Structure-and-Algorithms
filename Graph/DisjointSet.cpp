#include<iostream>
#include<string>
using namespace std;
int rankArr[101];
int parent[101];
void makeSet()
{
for(int i=0;i<101;i++) 
{
rankArr[i]=0;
parent[i]=-1;
}
}
int find(int x)
{
if(parent[x]==-1) return x;
return parent[x]=find(parent[x]);
}
void unionSet(int X,int Y)
{
X=find(X);
Y=find(Y);
if(rankArr[X]>rankArr[Y]) parent[X]=Y;
if(rankArr[X]<rankArr[Y]) parent[Y]=X;
else {
parent[Y]=X;
rankArr[X]++;
}
}
int main()
{
int T;
cin>>T;
makeSet();
while(T--)
{
string op;
cin>>op;
if(op=="UNION")
{
int x,y;
cin>>x;
cin>>y;
unionSet(x,y);
}
if(op=="FIND")
{
int x;
cin>>x;
cout<<"find of "<<x<<": "<<find(x)<<endl;
}
}
return 0;
}