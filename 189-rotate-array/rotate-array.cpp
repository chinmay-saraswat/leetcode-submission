class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size=nums.size();
        vector<int> v;
        for(int i=0;i<size;i++){
            v.push_back(nums[i]);
        }
        for(int i=0;i<size;i++){
            nums[(k+i)%size]=v[i];
        }
        
    }
};