class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mymap; // number -> last index

        for (int i = 0; i < nums.size(); i++) {
            if (mymap.find(nums[i]) != mymap.end()) {
                // pehle bhi ye number aya tha
                if (i - mymap[nums[i]] <= k) {
                    return true;
                }
            }
            // update last index of current number
            mymap[nums[i]] = i;
        }
        return false;
    }
};
