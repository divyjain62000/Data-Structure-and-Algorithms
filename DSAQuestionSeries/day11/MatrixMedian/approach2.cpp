#include<iostream>
#include<vector>
using namespace std;
int countSmallerThanMid(vector<int> &row, int mid) {
    int l = 0, h = row.size() - 1; 
    while(l <= h) {
        int md = (l + h) >> 1; 
        if(row[md] <= mid) {
            l = md + 1;
        }
        else {
            h = md - 1;
        }
    }
    return l; 
}
int findMedian(vector<vector<int> > &A) {
    int low = INT_MIN;
    int high = INT_MAX; 
    int n = A.size();
    int m = A[0].size(); 
    while(low <= high) {
        int mid = (low + high) >> 1; 
        int cnt = 0;
        for(int i = 0;i<n;i++) {
            cnt += countSmallerThanMid(A[i], mid); 
        }
        
        if(cnt <= (n * m) / 2) low = mid + 1; 
        else high = mid - 1; 
    }
    return low; 
}

int main()
{
int n;
cout<<"Enter number of rows: ";
cin>>n;
int m;
cout<<"Enter number of columns: ";
cin>>m;
vector<vector<int>> mat(n);
for(int i=0;i<n;i++)
{
for(int j=0;j<m;j++)
{
int e;
cin>>e;
mat[i].push_back(e);
}
}
cout<<"Median of matrix is "<<findMedian(mat);
return 0;
}