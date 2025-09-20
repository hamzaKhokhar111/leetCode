class Solution {
public:
    int firstUniqChar(string s) {
        // Step 1: frequency count array
        vector<int> freq(26, 0);
        
        for(char c : s) {
            freq[c - 'a']++;
        }
        
        // Step 2: find first unique
        for(int i = 0; i < s.size(); i++) {
            if(freq[s[i] - 'a'] == 1) {
                return i;
            }
        }
        
        return -1;
    }
};
