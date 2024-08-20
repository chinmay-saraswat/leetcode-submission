class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char, int>> st;
        for (char ch : s) {
            if (!st.empty() && st.top().first == ch) {
                st.top().second++;
            } else {
                st.push({ch, 1});
            }
            if (st.top().second == k) {
                st.pop();
            }
        }
        string result = "";
        while (!st.empty()) {
            result = string(st.top().second, st.top().first) + result;
            st.pop();
        }
        return result;
    }
};