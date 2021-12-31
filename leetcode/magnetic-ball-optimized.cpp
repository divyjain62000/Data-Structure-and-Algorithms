//O(n*log(n))
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool isValidGap(vector<int> &position,int gap,int m)
{
int prev=position[0];
int n=position.size();
int placed=1;
for(int i=1;i<n;i++)
{
if(position[i]-prev>=gap)
{
placed++;
prev=position[i];
}
if(placed==m) return true;
}
return false;
}

int maxDistance(vector<int> &position,int m)
{
sort(position.begin(),position.end());
int n=position.size();
int s,e,mid;
s=0;
e=position[n-1];
int gap;
while(s<=e)
{
mid=s+(e-s)/2;
if(isValidGap(position,mid,m))
{
s=mid+1;
gap=mid;
}
else
{
e=mid-1;
}
}
return gap;
}
int main()
{
int n,m;
cin>>n;
vector<int> position;
for(int i=0;i<n;i++)
{
int t;
cin>>t;
position.push_back(t);
}
cin>>m;
cout<<maxDistance(position,m);
return 0;
}