class Solution 
{
public:
int celebrity(vector<vector<int> >& M, int n) 
{
int c=0;
for(int i=1;i<n;i++)
{
if(M[c][i]==1) c=i;
}
for(int i=0;i<n;i++)
{
if(i!=c && (M[c][i]==1 || M[i][c]==0)) return -1;
}
return c;
}
};
