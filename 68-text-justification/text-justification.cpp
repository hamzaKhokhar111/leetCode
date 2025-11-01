class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int i = 0, n = words.size();

        while (i < n) {
            int j = i, lineLen = 0;
            // Choose words for this line
            while (j < n && lineLen + words[j].size() + (j - i) <= maxWidth) {
                lineLen += words[j].size();
                j++;
            }

            int spaceSlots = j - i - 1;
            string line;

            // Last line OR only 1 word → left justified
            if (j == n || spaceSlots == 0) {
                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k < j - 1) line += " ";
                }
                line += string(maxWidth - line.size(), ' ');
            } 
            else {
                // Middle justified
                int extraSpaces = maxWidth - lineLen;
                int spaceEach = extraSpaces / spaceSlots;
                int extra = extraSpaces % spaceSlots;

                for (int k = i; k < j; k++) {
                    line += words[k];
                    if (k < j - 1) {
                        line += string(spaceEach + (k - i < extra ? 1 : 0), ' ');
                    }
                }
            }
            result.push_back(line);
            i = j;
        }
        return result;
    }
};

//jm