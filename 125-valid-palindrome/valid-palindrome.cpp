class Solution {
public:
    bool isPalindrome(string s) {
        if (s.empty()) return true; // Empty string is considered a palindrome

        // Convert to lowercase
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        int left = 0, right = s.size() - 1;

        while (left < right) {
            // Skip non-alphanumeric characters
            if (!isalnum(s[left])) {
                left++;
                continue;
            }
            if (!isalnum(s[right])) {
                right--;
                continue;
            }

            if (s[left] != s[right]) return false;

            left++;
            right--;
        }

        return true;
    }
};
