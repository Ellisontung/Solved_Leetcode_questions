class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans = 0;
        int l = 0;
        int r = 1;
        for(int i = 1 ; i < prices.size() ; i++){
            if(prices[r]>prices[l]){
                ans=max(ans,prices[r]-prices[l]);
            }else{
                l=r;
            }
            r += 1;
        }
        
        return ans;
    }
};