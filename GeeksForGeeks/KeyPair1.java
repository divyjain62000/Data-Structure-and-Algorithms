class Solution 
{
boolean hasArrayTwoCandidates(int arr[], int n, int x) 
{
Arrays.sort(arr);
int i=0;
int j=n-1;
while(i<j)
{
if(arr[i]+arr[j]==x) return true;
else if(arr[i]+arr[j]>x) j--;
else i++;
}
return false;
}
}