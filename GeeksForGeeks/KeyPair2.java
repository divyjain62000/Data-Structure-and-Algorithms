class Solution 
{
boolean hasArrayTwoCandidates(int arr[], int n, int x) 
{
Map<Integer,Integer> m=new HashMap<>();
for(int i=0;i<n;i++)
{
int num=x-arr[i];
if(m.containsKey(num)) return true;
else
{
m.put(arr[i],num);
}
}
return false;
}
}