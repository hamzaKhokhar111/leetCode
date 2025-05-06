class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());  // sort vector

        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                result.push_back(i); // collect all matching indices
            }
        }
        return result; // return vector of indices
    }
};
