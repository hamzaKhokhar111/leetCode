class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mymap;

        // Count frequency
        for (int i = 0; i < nums.size(); i++) {
            mymap[nums[i]]++;
        }

        // Find majority element
        for (auto it : mymap) {
            if (it.second > nums.size() / 2) {
                return it.first;
            }
        }

        return -1; // In case no majority element exists
    }
};
