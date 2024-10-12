class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int k=11111111;
        int count = 0;
        for(int i=0;i<n;i++){
            if(nums[i]==val){
                nums[i] = k;
                count++;
            }
        }
        sort(nums.begin(),nums.end());
        for(int i=n;i>n-count;i--){
            nums.pop_back();
        }
        return nums.size();
    }
};