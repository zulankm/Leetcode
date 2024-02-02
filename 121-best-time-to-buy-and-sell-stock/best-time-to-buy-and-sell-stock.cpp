class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
            int n= prices.size();
            int maxprofit=0;
            int buyprice=10000;
            for(int i=0;i<n;i++)
            {
                buyprice= min(buyprice,prices[i]);
                maxprofit=max(maxprofit,prices[i]-buyprice);
            }
            
                
        return maxprofit;
    }
};