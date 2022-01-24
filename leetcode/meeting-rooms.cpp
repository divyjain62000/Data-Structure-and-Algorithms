// TC -> O(n*log(n))  SC -> O(1)
class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: if a person could attend all meetings
     */
    bool canAttendMeetings(vector<Interval> &intervals) {
        if(intervals.size()==0) return true;
        sort(intervals.begin(),intervals.end(),[](Interval A,Interval B){ return B.start>A.start; });
        int e=intervals[0].end;
        for(int i=1;i<intervals.size();i++)
        {
            if(intervals[i].start<e) return false;
            else if(intervals[i].start==e && intervals[i].end>e){
                e=intervals[i].end;
            }
        }
        return true;
    }
};