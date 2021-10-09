class Solution
{
public:
//Function to find maximum of each subarray of size k.
vector <int> max_of_subarrays(int *arr, int n, int k)
{
vector<int> res;
deque<int> dq(k);
int i;
for(i=0;i<k;i++)
{
// For every element, the previous smaller elements are useless so 
// remove them from dq
while(!dq.empty() && arr[i]>=arr[dq.back()]) dq.pop_back();

// Add new element at rear of queue
dq.push_back(i);
}
for(;i<n;i++)
{
res.push_back(arr[dq.front()]);

// Remove the elements which are out of this window 
while(!dq.empty() && dq.front()<=i-k) dq.pop_front(); // Remove from front of queue

// Remove all elements smaller than the currently 
// being added element (remove useless elements)
while(!dq.empty() && arr[i]>=arr[dq.back()]) dq.pop_back();

// Add current element at the rear of Qi
dq.push_back(i);
}

// Add the maximum element of last window
res.push_back(arr[dq.front()]);
return res;
}
};