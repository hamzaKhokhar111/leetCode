class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 1;
        
        // Step 1: find decreasing element
        while (i > 0 && nums[i - 1] >= nums[i]) {
            i--;
        }
        
        if (i == 0) {
            // already the largest permutation
            reverse(nums.begin(), nums.end());
            return;
        }
        
        int pivot = i - 1;
        
        // Step 2: find element just greater than pivot
        int j = n - 1;
        while (nums[j] <= nums[pivot]) {
            j--;
        }
        
        // Step 3: swap
        swap(nums[pivot], nums[j]);
        
        // Step 4: reverse suffix
        reverse(nums.begin() + i, nums.end());
    }
};
