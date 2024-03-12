class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = -1;
        int maxProfit = 0;
        for (int i = prices.size() - 1; i >= 0; i--){
            maxi = max(prices[i],maxi);
            int prof = maxi - prices[i];
            maxProfit = max(maxProfit, prof);
        }
        return maxProfit;
    }
};