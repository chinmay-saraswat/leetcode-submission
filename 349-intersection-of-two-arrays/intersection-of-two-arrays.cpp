class Solution {
public:
     vector<int> intersection(std::vector<int>& nums1, std::vector<int>& nums2) 
    {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        
        vector<int> result;
        
        int i = 0, j = 0;
        while (i < nums1.size() && j < nums2.size()) {
            if (nums1[i] == nums2[j]) {
                // If the elements are equal, it's part of the intersection.
                if (result.empty() || result.back() != nums1[i]) {
                    // Avoid duplicates in the result vector.
                    result.push_back(nums1[i]);
                }
                i++;
                j++;
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }
        
        return result;
    }
};