#include<iostream>
#include<algorithm>
using namespace std;
struct Meeting
{
    int start;
    int end;
};

bool comparator(struct Meeting m1,struct Meeting m2) {
    if(m1.end<m2.end) return true;
    else return false;
}
class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        struct Meeting meet[n];
        for(int i=0;i<n;i++) {
            meet[i].start=start[i];
            meet[i].end=end[i];
        }
        
        sort(meet,meet+n,comparator);
        
        int count=1;
        int limit=meet[0].end;
        
        for(int i=1;i<n;i++) {
            if(meet[i].start>limit) {
                limit=meet[i].end;
                count++;
            }
        }
        return count;
    }
};

int main()
{
Solution s;
int start[]={1,3,0,5,8,5};
int end[]={2,4,6,7,9,9};
int n=6;
cout<<s.maxMeetings(start,end,n);
return 0;
}