class Solution {
public:
    bool isPalindrome(string s) {
        
        transform(s.begin(), s.end(), s.begin(), :: tolower); //add this to your function list
        int n = s.length();
        string temp1 = "", temp2 = "";

        for(int i = 0; i < n; i++){
            if(s[i] >= 'a' and s[i] <= 'z' or s[i] >= '0' and s[i] <= '9'){
                temp1+=s[i];
            }
        }

        temp2 = temp1;
        reverse(temp1.begin(), temp1.end());

        if(temp1 == temp2) {
            return true;
        }
        else return false;
    }
};