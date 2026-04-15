class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp=101;
        int profit =0;

        for(int i=0; i<prices.size(); i++){
            bp=min(bp,prices[i]);
            
            profit=max(prices[i]-bp,profit);

        }
        return profit;
        
    }
};
