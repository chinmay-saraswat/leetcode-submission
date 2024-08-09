#include <stack>
class Solution {
public:
    bool isValid(string s) {
       stack<char>st;
      for (char c : s) {
        // Use single quotes to compare characters
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } else {
            // If the character is a closing bracket, check for a matching opening bracket
            if (st.empty()) return false; // No matching opening bracket

            char top = st.top();
            if ((c == ')' && top == '(') ||
                (c == '}' && top == '{') ||
                (c == ']' && top == '[')) {
                st.pop(); // Pop the matching opening bracket
            } else {
                return false; // Mismatch found
            }
        }
    }

    // If the stack is empty, all brackets were matched correctly
    return st.empty();
      }
};