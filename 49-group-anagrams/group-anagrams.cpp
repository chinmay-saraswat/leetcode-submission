class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>umap;

        for(auto x:strs){
            string word = x;
            sort(word.begin(),word.end());
            umap[word].push_back(x);
        }

        vector<vector<string>> ans;

        if(strs.empty()){
            return ans;
        }

        for(auto x : umap){
            ans.push_back(x.second);
        }

        return ans;
    }
};