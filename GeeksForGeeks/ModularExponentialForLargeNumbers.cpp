class Solution
{
public:
long long int PowMod(long long int x,long long int n,long long int M)
{
if(n==0) return 1;
if(n%2==0)
{
long long int y= PowMod(x,n/2,M);
return (y*y)%M;
}
else
{
return (((x%M)*PowMod(x,n-1,M)%M)%M);
}
}
};
