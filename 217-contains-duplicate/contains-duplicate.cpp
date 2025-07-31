class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());  // Sort the array first

        for (int i = 0; i < nums.size() - 1; i++) {  // Loop till second last
            if (nums[i] == nums[i + 1]) {  // Check adjacent elements
                return true;  // Duplicate found
            }
        }

        return false;  // No duplicates
    }
};
