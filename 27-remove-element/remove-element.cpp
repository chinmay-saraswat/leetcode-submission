class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }return i;
    }
};