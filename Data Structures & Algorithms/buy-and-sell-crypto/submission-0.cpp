class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int low = INT_MAX;
        int high = INT_MIN;
        vector<int> lowl(prices.size());
        vector<int> highr(prices.size());


        for(int i =0; i< prices.size();i++)
        {
            low = min(low, prices[i]);
            lowl[i] = low;     

        }
        for(int j = prices.size()-1;j>=0;j--)
        {
            high = max(high, prices[j]);
            highr[j] = high;     

        }
        int ans = 0;
        for(int i =0; i< prices.size();i++)
        {
            ans = max(ans, highr[i] - lowl[i]);   

        }
        return ans;
        
    }
};
