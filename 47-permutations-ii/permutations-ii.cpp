class Solution {
public:
    vector<vector<int>> result;
    vector<int> current;
    vector<bool> used;

    void backtrack(vector<int>& nums) {
        if (current.size() == nums.size()) {
            result.push_back(current);
            return;
        }

        for (int i = 0; i < nums.size(); i++) {
            // Agar ye element pehle se use ho chuka hai → skip
            if (used[i]) continue;

            // Duplicate skip condition
            if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) continue;

            // Choose
            used[i] = true;
            current.push_back(nums[i]);

            // Recurse
            backtrack(nums);

            // Undo (backtrack)
            used[i] = false;
            current.pop_back();
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end()); // important for duplicates
        used.assign(nums.size(), false);
        backtrack(nums);
        return result;
    }
};
