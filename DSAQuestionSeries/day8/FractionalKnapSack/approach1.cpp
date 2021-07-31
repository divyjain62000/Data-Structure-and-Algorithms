#include<iostream>
#include<algorithm>
using namespace std;
struct Item
{
int value;
int weight;
};

bool comparator(Item i1,Item i2)
{
double r1=(double)i1.value/(double)i1.weight;
double r2=(double)i2.value/(double)i2.weight;
return r1>r2;
}

double fractionalKnapsack(int W, Item arr[], int n)
{
sort(arr,arr+n,comparator);
double maxValue=0;
int capacity=0;
for(int i=0;i<n;i++) 
{
if(capacity+arr[i].weight<=W)
{
capacity+=arr[i].weight;
maxValue+=arr[i].value;
}
else
{
int remain=W-capacity;
maxValue+=((double)arr[i].value/(double)arr[i].weight)*remain;
}
}
return maxValue;
}
int main()
{
int n;
cout<<"Enter size: ";
cin>>n;
Item arr[n];
for(int i=0;i<n;i++)
{
cout<<"Enter value: ";
cin>>arr[i].value;
cout<<"Enter weight: ";
cin>>arr[i].weight;
}
int W;
cout<<"Enter W: ";
cin>>W;
cout<<"Max value is "<<fractionalKnapsack(W,arr,n);
return 0; 
}