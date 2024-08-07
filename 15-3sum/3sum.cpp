class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>> st;
        int n = nums.size();
        vector<vector<int>> output;
        sort(nums.begin(),nums.end());
        for(int i =0 ;i<n-2;i++){
            int low = i+1;
            int high = n-1;
        while(low<high) {    
                 if(nums[i]+nums[low]+nums[high]<0){
                    low++;
                }
                else if(nums[i]+nums[low]+nums[high]>0){
                    high--;
                }
                else{
                    st.insert({nums[i],nums[low],nums[high]});
                    low++;
                    high--;
                }
            }
        }
        for(auto num : st){
            output.push_back(num);
        }
        return output;
    }
};