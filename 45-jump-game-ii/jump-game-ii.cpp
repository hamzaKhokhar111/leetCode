class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps = 0;
        int farthest = 0;
        int end = 0;
        
        for (int i = 0; i < n - 1; i++) {
            farthest = max(farthest, i + nums[i]);
            if (i == end) {  // we’ve reached the end of the current jump range
                jumps++;
                end = farthest;  // move to the next range
            }
        }
        
        return jumps;
    }
};
