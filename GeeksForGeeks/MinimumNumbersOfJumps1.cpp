class Solution{
  public:
    int minJumps(int arr[], int n){
        int dp[n];
        for(int i=0;i<n;i++) dp[i]=INT_MAX;
        dp[0]=0;
        for(int i=1;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(dp[j]!=INT_MAX and arr[j]+j>=i) {
                    if(dp[j]+1<dp[i]) {
                       dp[i]=dp[j]+1; 
                    }
                }
            }    
        }
        return dp[n-1]!=INT_MAX?dp[n-1]:-1;
    }
};
