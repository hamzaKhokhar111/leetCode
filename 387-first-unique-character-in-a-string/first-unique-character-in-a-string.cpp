class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, int> freq;

        // Step 1: count frequencies
        for (char c : s) {
            freq[c]++;
        }

        // Step 2: iterate over string in original order
        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 1) {
                return i;  // return index of first unique char
            }
        }

        return -1;  // no unique character found
    }
};
