class Solution {
public:
    int missingInteger(vector<int>& nums) {
        set<int> s;
        for(auto x:nums) {
            s.insert(x);
        }
        int n=nums.size(),t=nums[0];
        for(int i=1;i<n;i++) {
            if(nums[i]==nums[i-1]+1) {
                t+=nums[i];
            }
            else {
                break;
            }
        }
        while(s.count(t)) {
            t++;
        }
        return t;
    }
};