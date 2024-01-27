class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {  
        int n=nums.size();
        unordered_map<int, int> cnt;
        vector<int> ans;
        for(int i=0;i<n;i++){class Solution {
public:
    std::vector<int> majorityElement(std::vector<int>& nums) {
        std::vector<int> result; 
        std::unordered_set<int> uniqueNums;
        for (int num : nums) {
            uniqueNums.insert(num);
        } 
        for (int num : uniqueNums) {
            int count = 0;
            for (int n : nums) {
                if (n == num) {
                    count++;
                }
            }
            if (count > nums.size() / 3) {
                result.push_back(num);
            }
        } 
        return result;
    }
};
            cnt[nums[i]]++;
        }
        for(auto j=cnt.begin();j!=cnt.end();j++){
            if(j->second>n/3)ans.push_back(j->first);
        }
        return ans;
    }
};