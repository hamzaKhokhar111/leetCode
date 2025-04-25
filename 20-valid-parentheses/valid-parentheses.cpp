#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        stack<char> stk; // Initialize a stack to store opening brackets
        for (char c : s) {
            // If current character is an opening bracket, push it onto the stack
            if (c == '(' || c == '{' || c == '[') {
                stk.push(c);
            } else {
                // If it's a closing bracket, check for a match
                if (stk.empty()) return false; // Stack is empty, so it's invalid
                char top = stk.top();          // Get the top of the stack
                if ((c == ')' && top == '(') || 
                    (c == '}' && top == '{') || 
                    (c == ']' && top == '[')) {
                    stk.pop(); // Match found, pop the opening bracket
                } else {
                    return false; // Mismatched bracket
                }
            }
        }
        // At the end, stack should be empty if it's valid
        return stk.empty();
    }
};
