class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> result;
        if (s.empty() || words.empty()) return result;

        int wordLen = words[0].size();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;
        if (s.size() < totalLen) return result;

        // word frequency map
        unordered_map<string, int> wordFreq;
        for (auto &w : words) wordFreq[w]++;

        // check each possible start within wordLen
        for (int i = 0; i < wordLen; i++) {
            unordered_map<string, int> window;
            int left = i, count = 0;

            for (int j = i; j + wordLen <= s.size(); j += wordLen) {
                string word = s.substr(j, wordLen);

                if (wordFreq.count(word)) {
                    window[word]++;
                    count++;

                    // agar word zyada ho gaya to shrink window
                    while (window[word] > wordFreq[word]) {
                        string leftWord = s.substr(left, wordLen);
                        window[leftWord]--;
                        left += wordLen;
                        count--;
                    }

                    // agar sab match ho gaye
                    if (count == wordCount) {
                        result.push_back(left);
                        // left ko aage badhao ek word ke length se
                        string leftWord = s.substr(left, wordLen);
                        window[leftWord]--;
                        left += wordLen;
                        count--;
                    }
                } else {
                    // reset window
                    window.clear();
                    count = 0;
                    left = j + wordLen;
                }
            }
        }
        return result;
    }
};
