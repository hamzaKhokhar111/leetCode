#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        if (n == 1) return "1";

        string s = countAndSay(n - 1);
        string ans = "";

        for (int i = 0; i < s.size(); i++) {
            int count = 1;
            while (i + 1 < s.size() && s[i] == s[i + 1]) {
                count++;
                i++;
            }
            ans += to_string(count) + s[i];
        }

        return ans;
    }
};
