class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        int n1=nums1.size();
        int n2=nums2.size();   sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());                                     
          int i=0,j=0;
        while(n1>i && n2>j){
            if(nums1[i]==nums2[j]){
                v.push_back(nums1[i]);
                i++;j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        } v.erase(unique(v.begin(), v.end()), v.end());
        return v;
    }
};