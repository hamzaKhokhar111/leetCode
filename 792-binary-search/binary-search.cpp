class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;                 // start index
        int right = nums.size() - 1;  // end index

        while (left <= right) {
            int mid = left + (right - left) / 2; // middle index

            if (nums[mid] == target) {
                return mid; // target mil gaya
            }
            else if (nums[mid] < target) {
                left = mid + 1; // target right side me hai
            }
            else {
                right = mid - 1; // target left side me hai
            }
        }

        return -1; // target nahi mila
    }
};
