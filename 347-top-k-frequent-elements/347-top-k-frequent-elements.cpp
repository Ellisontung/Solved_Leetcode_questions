class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        unordered_map<int,vector<int>>mp_r;
        vector<int> s,ans;
        unordered_set<int> set;
        for(int num: nums){
            mp[num]++;
        }
        for(auto i: mp){
            mp_r[i.second].push_back(i.first);
            set.insert(i.second);
        }
        for(auto i :set){
            s.push_back(i);
        }
        sort(s.begin(),s.end());
        int i = 0;
        int j = 0;
        while(i<k){
            for(int t: mp_r[s[s.size()-1-j]]){
                ans.push_back(t);
                i++;
                if(i==k){
                    break;
                }
            }
            j++;
        }
        return ans;
    }
};