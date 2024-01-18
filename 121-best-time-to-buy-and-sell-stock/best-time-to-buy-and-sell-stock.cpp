class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_value = prices[0];
        int maxprofit = INT_MIN;
        for (int i = 0; i < prices.size(); i++) {
            int cost = prices[i] - min_value;
            maxprofit = max(maxprofit, cost);
            min_value = min(min_value, prices[i]);
        }
        return maxprofit;
    }
};