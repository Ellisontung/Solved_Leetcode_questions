class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        int dp[s.size()+1];
        for (int i = 0 ; i < s.size() ; i++){
            dp[i] = 0;
        }
        dp[s.size()] = 1;
        
        for(int j = s.size()-1 ; j > -1 ; j--){
            for(int w = 0 ; w < wordDict.size() ; w++){
                cout<<j + wordDict[w].size()<<" ";
                if(j + wordDict[w].size() <= s.size() && check_s(s,wordDict[w],j)){
                    dp[j] = dp[j+wordDict[w].size()];
                }
                if(dp[j])
                    break;
            }
        }
        return dp[0];
    }
    bool check_s(string s, string w, int s_pos){
        for(int i = s_pos ; i < s.size() && i-s_pos <=w.size()-1 ; i++){
            if(s[i]!=w[i-s_pos])
                return false;
        }
        return true;
    }
};