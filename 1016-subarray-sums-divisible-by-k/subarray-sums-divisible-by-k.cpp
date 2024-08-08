class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> remainderCount;
        remainderCount[0] = 1; // Initialize with 0 remainder count
        int count = 0, sum = 0;

        for (int num : nums) {
            sum += num;
            int remainder = sum % k;
            if (remainder < 0) remainder += k; // Handle negative remainders

            if (remainderCount.find(remainder) != remainderCount.end()) {
                count += remainderCount[remainder];
            }

            remainderCount[remainder]++;
        }
        return count;

    }
};