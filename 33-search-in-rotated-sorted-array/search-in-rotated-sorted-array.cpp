class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target) return mid;

            // Check if left half is sorted
            if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1; // target left half me hai
                } else {
                    left = mid + 1; // target right half me hai
                }
            }
            // Else right half is sorted
            else {
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1; // target right half me hai
                } else {
                    right = mid - 1; // target left half me hai
                }
            }
        }
        return -1;
    }
};
