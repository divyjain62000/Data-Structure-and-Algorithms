import java.util.*;
import java.lang.*;
import java.io.*;
class GFG
{
public static void main(String[] args) throws IOException
{
BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
int T = Integer.parseInt(br.readLine().trim());
while(T-->0)
{
String[] S = br.readLine().trim().split(" ");
int V = Integer.parseInt(S[0]);
int E = Integer.parseInt(S[1]);
ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
for(int i = 0; i < V; i++){
adj.add(new ArrayList<Integer>());
}
for(int i = 0; i < E; i++){
String[] s = br.readLine().trim().split(" ");
int u = Integer.parseInt(s[0]);
int v = Integer.parseInt(s[1]);
adj.get(u).add(v);
adj.get(v).add(u);
}
Solution obj = new Solution();
boolean ans = obj.isBipartite(V, adj);
if(ans)
System.out.println("1");
else System.out.println("0");
 }
}
}


class Solution
{
boolean bfsCheck(ArrayList<ArrayList<Integer>>adj,int src,int color[])
{
Queue<Integer>q=new LinkedList<>();
if(color[src]==-1)
{
q.add(src);
color[src]=1;
}
while(!q.isEmpty())
{
int v=q.poll();
for(int x:adj.get(v))
{
if(color[x]==-1)
{
color[x]=1-color[v];
q.add(x);
}
else if(color[x]==color[v]) return false;
}
}
return true;
}

public boolean isBipartite(int V, ArrayList<ArrayList<Integer>>adj)
{
int color[]=new int[V];
for(int i=0;i<V;i++) color[i]=-1;
for(int i=0;i<V;i++)
{
if(color[i]==-1)
{
if(!bfsCheck(adj,i,color)) return false;
}
} 
return true;
}
}