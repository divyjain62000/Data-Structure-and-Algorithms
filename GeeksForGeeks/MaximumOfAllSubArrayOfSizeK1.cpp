class Solution
{
public:
vector <int> max_of_subarrays(int *arr, int n, int k)
{
vector<int> res;
for(int i=0;i<=n-k;i++)
{
int max=arr[i];
for(int j=i+1;j<k+i;j++)
{
if(arr[j]>max) max=arr[j];
}
res.push_back(max);
}
return res;
}
};