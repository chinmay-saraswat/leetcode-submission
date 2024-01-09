class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int i = 0;
        int maxcount = 0;
        for (int j = i; j < nums.size(); j++) {
            if (nums[j] == 1) {
                count++;
                maxcount = max(maxcount, count);
            } else if (nums[j] != 1) {
                i = j + 1;
                count = 0;
            }
        }
        return maxcount;
    }
};