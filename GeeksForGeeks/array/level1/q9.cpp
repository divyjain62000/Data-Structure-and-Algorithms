#include<iostream>
#include<set>
using namespace std;
void intersectionOfArray(int n,int m,int *arr1,int *arr2)
{
int i,j;
i=0;
j=0;
cout<<"intersection of array is: "<<endl;
while(i<n && j<m)
{
if(arr1[i]<arr2[j]) i++;
else if(arr1[i]>arr2[j]) j++;
else
{
cout<<arr1[i]<<" ";
i++;
j++;
}
}
}
void unionOfArray(int n,int m,int *arr1,int *arr2)
{
set<int> unionset;
int i;
for(i=0;i<n;i++) unionset.insert(arr1[i]);
for(i=0;i<m;i++) unionset.insert(arr2[i]);
cout<<"union of array is: "<<endl;
for(int x:unionset) cout<<" "<<x;
}
int main()
{
int n,m;
int i;
int *arr1;
int *arr2;
printf("Enter n: ");
scanf("%d",&n);
arr1=(int *)malloc(sizeof(int)*n);
for(i=0;i<n;i++) scanf("%d",&arr1[i]);
printf("Enter m: ");
scanf("%d",&m);
arr2=(int *)malloc(sizeof(int)*m);
for(i=0;i<m;i++) scanf("%d",&arr2[i]);
unionOfArray(n,m,arr1,arr2);
cout<<endl;
intersectionOfArray(n,m,arr1,arr2);
free(arr1);
free(arr2);
return 0;
}