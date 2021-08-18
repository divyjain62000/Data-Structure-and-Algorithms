#include<iostream>
#include<vector>
using namespace std;

bool isPossibleToAllocate(int barrier,int B,vector<int> &A,int n)
{
    int allocatedStudent=1;
    int page=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]>barrier) return false;
        if(page+A[i]>barrier)
        {
            allocatedStudent+=1;
            page+=A[i];
        }
        else
        {
            page+=A[i];
        }
    }

    if(allocatedStudent>B) return false;
return true;
}

int books(vector<int> &A, int B) 
{
    int low=A[0];
    int high=A[0];
    int n=A.size();
    int res=-1;
    for(int i=1;i<n;i++)
    {
        high+=A[i];
        if(low>A[i]) low=A[i];
    }

    while(low<=high)
    {
        int mid=(low+high)>>1;
        if(isPossibleToAllocate(mid,B,A,n)) 
        {
            res=mid;
            high=mid-1;
        }
        else 
        {
            low=mid+1;
        }
    }
    return res;
}

int main()
{
vector<int> A;
int B;
int n;
cout<<"Enter size: ";
cin>>n;
for(int i=0;i<n;i++)
{
int e;
cin>>e;
A.push_back(e);
}
cout<<"Enter number of students: ";
cin>>B;
cout<<books(A,B);
return 0;
}
