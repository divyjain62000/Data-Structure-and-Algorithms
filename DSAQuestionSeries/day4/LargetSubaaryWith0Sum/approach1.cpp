#include<iostream>
#include<unordered_map>
using namespace std;
int maxLen(int A[], int n)
{
unordered_map<int,int> map;
int sum=0;
int maxi=0;
for(int i=0;i<n;i++) {
sum+=A[i];
if(sum==0) {
maxi=i+1;
}
else {
if(map.find(sum)!=map.end()) {
maxi=max(maxi,i-map[sum]);
}
else {
map.insert({sum,i});
}
}
}
return maxi;
}
int main()
{
int n;
cout<<"Enter size: ";
cin>>n;
int A[n];
cout<<"Enter elements: ";
for(int i=0;i<n;i++) {
cin>>A[i];
}
cout<<maxLen(A,n);
return 0;
}