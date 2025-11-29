class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        
        // Simple nested loop
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                
                // Check if sum matches target
                if(nums[i] + nums[j] == target) {
                    return {i, j};  // Return indexes
                }
            }
        }
        
        return {};  // Just in case (should not happen)
    }
};
