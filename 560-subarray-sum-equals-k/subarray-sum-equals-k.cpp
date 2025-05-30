class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> prefixCount;
        prefixCount[0] = 1;

        int count = 0;
        int currentSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            currentSum += nums[i];

            if (prefixCount.find(currentSum - k) != prefixCount.end()) {
                count += prefixCount[currentSum - k];
            }

            prefixCount[currentSum]++;
        }

        return count;
    }
};
