class Solution {
public:
    string build(const string& str) {
        stack<char> stk;
        for (char x : str) {
            if (x != '#') {
                stk.push(x);
            } else if (!stk.empty()) {
                stk.pop();
            }
        }
        
        string result;
        while (!stk.empty()) {
            result.insert(result.begin(), stk.top()); // Insert at the beginning
            stk.pop();
        }
        return result;
    }
    
    bool backspaceCompare(string s, string t) {
        return build(s) == build(t);
    }
};
