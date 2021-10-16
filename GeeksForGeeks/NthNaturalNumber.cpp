class Solution
{
public:
long long findNth(long long N)
{
long long t=1;
long long res=0;
while(N>0)
{
res=res+(N%9)*t;
N=N/9;
t=t*10;
}
return res;
}
};