class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mymap;

        // frequency count
        for (int i = 0; i < nums.size(); i++) {
            mymap[nums[i]]++;
        }

        // check frequency
        for (auto pair : mymap) {
            if (pair.second > 1) {
                return true;
            }
        }

        return false;
    }
};
