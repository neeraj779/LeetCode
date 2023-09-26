class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minBuyingPrice = prices[0], profit{0}, cost;
        for(int i = 1; i < prices.size(); ++i){
            cost = prices[i] - minBuyingPrice;
            profit = max(profit, cost);
            minBuyingPrice = min(minBuyingPrice, prices[i]);
        }
        return profit;
    }
};