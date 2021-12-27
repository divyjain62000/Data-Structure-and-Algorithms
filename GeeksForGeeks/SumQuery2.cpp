class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        vector<int> res;
        int store[n];
        store[0]=arr[0];
        for(int i=1;i<n;i++) {
            store[i]=store[i-1]+arr[i];
        }
        q=2*q;
        for(int i=1;i<q;i=i+2) {
            int s=queries[i-1]-1;
            int e=queries[i]-1;
            if(s!=0) {
                res.push_back(store[e]-store[s-1]);
            }
            else res.push_back(store[e]);
        }
     return res;   
    }
};