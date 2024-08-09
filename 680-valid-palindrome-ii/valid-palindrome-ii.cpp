class Solution {
public:
    bool check(string s, int start, int end) {
        while (start < end) {
            if (s[start] != s[end]) {
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;
        while (start < end) {
            if (s[start] == s[end]) {
                start++;
                end--;
            } else {
                return check(s, start + 1, end) || check(s, start, end - 1);
            }
        }
        return true;
    }
};