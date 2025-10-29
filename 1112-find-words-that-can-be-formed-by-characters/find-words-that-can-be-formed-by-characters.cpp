class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26,0);
        for(char c : chars) freq[c-'a']++;
        int ans = 0;
        for(string w : words){
            vector<int> f = freq;
            bool ok = true;
            for(char c : w){
                if(--f[c-'a'] < 0){
                    ok = false;
                    break;
                }
            }
            if(ok) ans += w.size();
        }
        return ans;
    }
};
