class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minele=prices[0];
        int maxp=0;
        for(int i=0;i<prices.size();i++)
        {
            maxp=max(maxp,prices[i]-minele);
            minele=min(prices[i],minele);
        }
        return maxp;
    }

};
