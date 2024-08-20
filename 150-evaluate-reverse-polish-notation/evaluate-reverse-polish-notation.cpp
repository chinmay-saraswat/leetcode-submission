class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int ans = 0;
        stack<string> st;
        for (auto it : tokens) {
            if (it == "+" || it == "-" || it == "*" || it == "/") {
                int a = stoi(st.top());
                st.pop();
                int b = stoi(st.top());
                st.pop();
                int c =
                    ((it == "+")
                         ? (b + a)
                         : ((it == "-") ? (b - a)
                                        : ((it == "*") ? (b * a) : (b / a))));
                st.push(to_string(c));
            } else {
                st.push(it);
            }
        }
        return stoi(st.top());
    }
};