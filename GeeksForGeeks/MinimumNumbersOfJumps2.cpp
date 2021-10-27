class Solution{
  public:
    int minJumps(int arr[], int n){
        int reachable=arr[0];
        int steps=arr[0];
        int jump=1;
        if(n==1) return 0;
        else if(arr[0]==0) return -1;
        else {
            for(int i=1;i<n;i++) {
                if(i==n-1) {
                    return jump;
                }
              reachable=max(reachable,i+arr[i]);
              steps--;
              if(steps==0) {
                  jump++;
                  if(i>=reachable) {
                      return -1;
                  }
                  steps=reachable-i;
              }
            }
        }
        return jump;
    }
};