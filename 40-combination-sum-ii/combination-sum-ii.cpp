class Solution {
public:
    vector<vector<int>> ans;

    void backtrack(vector<int>& candidates, int target, vector<int>& temp, int start) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }
        for (int i = start; i < candidates.size(); i++) {
            if (i > start && candidates[i] == candidates[i - 1]) continue; // skip duplicates
            if (candidates[i] > target) break; // pruning
            temp.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], temp, i + 1); // move forward (i+1 because each number used once)
            temp.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> temp;
        backtrack(candidates, target, temp, 0);
        return ans;
    }
};
