class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end()); // nums1 ke elements
        unordered_set<int> result;

        for (int num : nums2) {
            if (set1.count(num)) {  // agar nums2 ka element set1 me hai
                result.insert(num); // unique hone ke liye set use
            }
        }

        // convert set to vector
        return vector<int>(result.begin(), result.end());
    }
};
