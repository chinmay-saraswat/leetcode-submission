#include <set>
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> num;
        for(int i = 0;i<nums.size();i++){
            num.insert(nums[i]);
        }
        int index = 0;
        for (const int& number : num) {
        nums[index++] = number;
        }
        int k=num.size();
        return k;
    }
};