void rotate(int arr[], int n)
{
    int tmp=arr[n-1];
    int k;
    for(int i=n-1;i>=1;i--) {
        arr[i]=arr[i-1];
    }
    arr[0]=tmp;
    
}