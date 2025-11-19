class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> mp; // value -> index

        for (int i = 0; i < nums.size(); i++) {
            int required = target - nums[i];

            // Check if required number already exists
            if (mp.find(required) != mp.end()) {
                return { mp[required], i };
            }

            // Otherwise store current number with index
            mp[nums[i]] = i;
        }

        return {};
    }
};
//hamza
