class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        if (points.empty()) return 0;

        // Step 1: Sort by end of interval
        sort(points.begin(), points.end(), [](auto &a, auto &b) {
            return a[1] < b[1];
        });

        int arrows = 1;
        int end = points[0][1]; // position of the first arrow

        // Step 2: Traverse and count new arrows when needed
        for (int i = 1; i < points.size(); i++) {
            // if balloon starts after previous arrow's end → need new arrow
            if (points[i][0] > end) {
                arrows++;
                end = points[i][1]; // update arrow position
            }
        }

        return arrows;
    }
};
