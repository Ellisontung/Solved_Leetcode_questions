class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        unordered_map<int,vector<int>> mp;
        for(int i = 0 ; i < numbers.size() ; i++){
            mp[numbers[i]].push_back(i+1);
        }
        for(int i:numbers){
            if(mp.find(target-i)!=mp.end()){
                if(target-i==i&&mp[i].size()>1){
                    ans[0] = mp[i][0];
                    ans[1] = mp[i][1];
                    sort(ans.begin(), ans.end());
                    return ans;
                }
                ans[0] = mp[target-i][0];
                ans[1] = mp[i][0];
                sort(ans.begin(), ans.end());
                return ans;
            }
        }
        return ans;
    }
};