class Solution
{
public:
int minElementIndex(vector<int> arr,int k)
{
int minIndex=0;
for(int i=1;i<k;i++)
{
if(arr[minIndex]>arr[i]) minIndex=i;
}
return minIndex;
}
vector<int> kLargest(int arr[], int n, int k) 
{
vector<int> tmp;
for(int i=0;i<k;i++) tmp.push_back(arr[i]);
int minIndex=minElementIndex(tmp,k);
for(int i=k;i<n;i++)
{
if(arr[i]>tmp[minIndex])
{
swap(arr[i],tmp[minIndex]);
minIndex=minElementIndex(tmp,k);
}
}
sort(tmp.begin(),tmp.end(),greater<int>());
return tmp;
}
};