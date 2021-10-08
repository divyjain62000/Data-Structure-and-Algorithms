long long maxArea(long long A[], int len)
{
int l=0;
int r=len-1;
long long maxArea=0;
while(l<r)
{
long long height=min(A[l],A[r]);
maxArea=max(maxArea,height*(r-l));
if(A[l]<A[r]) l++;
else r--;
}
return maxArea;
}