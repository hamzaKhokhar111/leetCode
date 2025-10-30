class Solution {
public:
    bool checkIfPangram(string s) {
        vector<bool> seen(26, false);
        for(char c : s) seen[c - 'a'] = true;
        return all_of(seen.begin(), seen.end(), [](bool x){ return x; });
    }
};
