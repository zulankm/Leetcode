class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if ( prices.size() < 2) return 0;
        int minprice = prices[0];
        int maxprofit = 0;
        
        for(int i = 1; i < prices.size(); i++)
        {
            if(prices[i] > prices[i-1]){
                maxprofit = max(maxprofit,prices[i] - minprice);
            }
            else{
            minprice = min(minprice,prices[i]);
            }
        }
      
        return maxprofit;
    }
};