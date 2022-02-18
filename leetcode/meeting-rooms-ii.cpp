// TC -> O(n*log(n))  SC -> O(n)
/**
 * Definition of Interval:
 * classs Interval {
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    /**
     * @param intervals: an array of meeting time intervals
     * @return: the minimum number of conference rooms required
     */
    int minMeetingRooms(vector<Interval> &intervals) {
        
        vector<int> start;
        vector<int> end;
        for(Interval inv:intervals)
        {
            start.push_back(inv.start);
            end.push_back(inv.end);
        }
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        
        int s=0;
        int e=0;
        int roomsNeeded=0;
        while(s<intervals.size()) {
            if(start[s++]>=end[e]) {
                e++;
            }else {
                ++roomsNeeded;
            }

        }
        return roomsNeeded;
    }
};