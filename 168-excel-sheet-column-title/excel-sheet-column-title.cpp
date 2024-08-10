class Solution {
public:
    string convertToTitle(int columnNumber) {
        vector<char>v={'Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y'};
        string ans= "";
        while(columnNumber){
            char x=v[columnNumber%26];
            ans=ans+x;
            if(x=='Z'){
                columnNumber-=1;
            }
            columnNumber/=26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};