class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {  
        int n=nums.size();
        unordered_map<int, int> cnt;
        vector<int> ans;
        for(int i=0;i<n;i++){
            cnt[nums[i]]++;
        }
        for(auto j=cnt.begin();j!=cnt.end();j++){
            if(j->second>n/3)ans.push_back(j->first);
        }
        return ans;
    }
};