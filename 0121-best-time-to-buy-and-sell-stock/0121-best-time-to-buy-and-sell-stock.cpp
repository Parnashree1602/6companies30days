class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n =prices.size();
        int m=prices[0];
        int mp=0;
        for(int i=1;i<n;i++)
        {
            m=min(m,prices[i]);
            mp=max(mp,(prices[i]-m));
        }
            return mp;
            
        
    }
};