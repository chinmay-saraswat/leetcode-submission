class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int end = nums.size() - 1;
        int ansp = nums[end] * nums[end - 1] * nums[end - 2];
        int ansn = nums[0] * nums[1] * nums[end];
        if(ansn>ansp){
            return ansn;
        }
        return ansp;
    }
};