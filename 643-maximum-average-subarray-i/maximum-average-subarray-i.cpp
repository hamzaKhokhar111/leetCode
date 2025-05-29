class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int windowSum = 0;
        
        // Calculate sum of first window
        for (int i = 0; i < k; ++i) {
            windowSum += nums[i];
        }

        int maxSum = windowSum;

        // Slide the window
        for (int i = 1; i <= nums.size()-k; ++i) {

            windowSum = windowSum - nums[i-1] + nums[i+k-1];
            maxSum = max(maxSum, windowSum);
        }

        return static_cast<double>(maxSum) / k;
    }
};
