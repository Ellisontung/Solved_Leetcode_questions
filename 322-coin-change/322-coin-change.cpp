class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int ans[amount+1];
        for (int i = 1 ; i < amount+1 ; i++){
            ans[i]= amount+1;
        }
        ans[0] = 0;
        
        for(int i = 1 ; i < amount+1 ; i++){
            for(int j = 0 ; j < coins.size() ; j++){
                if(i-coins[j] >= 0){
                    ans[i] = min(ans[i],1+ans[i-coins[j]]);
                }
            }
        }
        
        if(ans[amount]!=amount+1){
            return ans[amount];
        }else{
            return -1;
        }
        
    }
};