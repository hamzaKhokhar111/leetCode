class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        int ans = 0;
        for(string &w : words)
            if(s.rfind(w,0) == 0) ans++;
        return ans;
    }
};
