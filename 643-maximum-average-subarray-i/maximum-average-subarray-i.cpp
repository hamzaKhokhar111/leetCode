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
        for (int i = k; i < nums.size(); ++i) {
            windowSum += nums[i] - nums[i - k];
            maxSum = max(maxSum, windowSum);
        }

        return static_cast<double>(maxSum) / k;
    }
};
