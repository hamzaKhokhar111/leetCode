class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroFoundAt = 0;

        // Step 1: Move non-zero elements forward
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[lastNonZeroFoundAt] = nums[i];
                lastNonZeroFoundAt++;
            }
        }

        // Step 2: Fill remaining positions with zeros
        for (int i = lastNonZeroFoundAt; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
