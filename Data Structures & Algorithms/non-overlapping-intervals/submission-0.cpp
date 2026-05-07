#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    
        if (intervals.empty()) return 0;

        sort(intervals.begin(), intervals.end());
        int res = 0;                 
        int prevEnd = intervals[0][1];  
        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] < prevEnd) {
                res++;
                prevEnd = min(prevEnd, intervals[i][1]);
            } 
            
            else {
                // Keep the current interval and update prevEnd to its end time
                prevEnd = intervals[i][1];
            }
        }

        return res;
    }
};