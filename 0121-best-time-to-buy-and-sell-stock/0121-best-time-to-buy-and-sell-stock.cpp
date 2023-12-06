class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit =0;
        int curr=prices[0];
        int n= prices.size();
        for(int i=1; i<n; i++){
            
            profit = max(profit,  prices[i] -curr);
                curr= min(curr, prices[i]);
            
        }
        return profit;
    }
};