class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = INT_MAX;
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (buy > prices[i]) {
                buy = prices[i];
            }
            if (buy < prices[i]) {
                int profit = prices[i] - buy;
                maxProfit = max(profit, maxProfit);
            }
        }
        return maxProfit;
    }
};