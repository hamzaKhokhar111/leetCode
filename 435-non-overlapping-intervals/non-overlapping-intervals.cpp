class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        // Step 1: Sort by end time
        sort(intervals.begin(), intervals.end(), [](auto &a, auto &b) {
            return a[1] < b[1];
        });

        int count = 0;  // intervals to remove
        int prevEnd = intervals[0][1]; // ending of first interval

        // Step 2: Traverse from second interval
        for (int i = 1; i < intervals.size(); i++) {
            // If current interval overlaps with previous
            if (intervals[i][0] < prevEnd) {
                count++; // overlap → remove it
            } else {
                prevEnd = intervals[i][1]; // update previous end
            }
        }

        return count;
    }
};
