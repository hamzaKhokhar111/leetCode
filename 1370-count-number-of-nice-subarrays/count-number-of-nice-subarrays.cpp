class Solution {
public:
    // Helper function to count subarrays with at most k odd numbers
    int atMost(vector<int>& nums, int k) {
        int count = 0;
        int left = 0;
        for (int right = 0; right < nums.size(); right++) {
            if (nums[right] % 2 == 1) {
                k--;  // odd number mila to k kam karo
            }

            while (k < 0) {
                if (nums[left] % 2 == 1) {
                    k++;  // left hata rahe hain, agar wo odd tha to k wapas barhao
                }
                left++;  // window choti karo
            }

            count += (right - left + 1);  // har window mein jitni subarrays ban sakti hain
        }
        return count;
    }

    int numberOfSubarrays(vector<int>& nums, int k) {
        return atMost(nums, k) - atMost(nums, k - 1);
    }
};
