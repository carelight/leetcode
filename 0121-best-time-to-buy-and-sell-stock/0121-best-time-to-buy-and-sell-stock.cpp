class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mins =prices[0];
         int pro=0,maxpro=0;
         for (int i = 0; i < prices.size(); i++)
         {
             mins = min(mins,prices[i]);
             pro= prices[i]-mins;
              maxpro=max(maxpro,pro);
         }
       return maxpro;  
       
    }
};