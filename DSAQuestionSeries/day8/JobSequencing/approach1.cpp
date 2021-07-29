#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Job
{
int id;
int dead;
int profit;
};
bool comparator(Job j1,Job j2)
{
return j1.profit>j2.profit;
}
vector<int> JobScheduling(Job job[],int n)
{
vector<int> res;
sort(job,job+n,comparator);
int maxi=job[0].dead;
for(int i=1;i<n;i++)
{
maxi=max(maxi,job[i].dead);
}
int slot[maxi+1];
fill_n(slot,maxi+1,-1);
int countJobs=0;
int jobProfit=0;
for(int i=0;i<n;i++)
{
for(int j=job[i].dead;j>0;j--)
{
if(slot[j]==-1)
{
slot[j]=i;
countJobs++;
jobProfit+=job[i].profit;
break;
}
}
}
res.push_back(countJobs);
res.push_back(jobProfit);
return res;
}
int main()
{
int n;
cout<<"Enter size: ";
cin>>n;
cout<<"Enter job details: \n";
Job job[n];
for(int i=0;i<n;i++)
{
cout<<"Enter id: ";
cin>>job[i].id;
cout<<"Enter deadline: ";
cin>>job[i].dead;
cout<<"Enter profit: ";
cin>>job[i].profit;
}
vector<int> res=JobScheduling(job,n);
for(int x:res) cout<<x<<" ";
return 0;
}