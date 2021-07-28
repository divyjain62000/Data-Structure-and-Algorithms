#include<iostream>
#include<algorithm>
using namespace std;
int findPlatform(int arr[], int dep[], int n)
{
sort(arr,arr+n);
sort(dep,dep+n);
int platform=1;
int result=platform;
int j=0;
int i=1;
while(i<n && j<n) 
{   
if(arr[i]<=dep[j]) 
{
platform++;
i++;
}else
if(arr[i]>dep[j]) 
{
platform--;
j++;
}
if(platform>result) result=platform;
}
return result;
}

int main()
{
int arr[]={940, 900, 950, 1100, 1500, 1800};
int dep[]={910, 1200, 1120, 1130, 1900, 2000};
int n=6;
//int arr[]={900,1100,1235};
//int dep[]={1000,1240,1200};
//int n=3;
int res=findPlatform(arr,dep,n);
printf("%d",res);
}