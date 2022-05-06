class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i : nums){
            mp[i]++;
        }
        int test = 1;
        while(true){
            if(mp[test]==0) return test;
            else test++;
        }
        return -1;
    }
};