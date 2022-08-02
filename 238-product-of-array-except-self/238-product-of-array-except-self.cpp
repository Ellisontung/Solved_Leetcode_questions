class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prefix[nums.size()];
        int postfix[nums.size()];
        prefix[0] = 1;
        postfix[nums.size()-1]=1;
        vector<int> ans;
        for(int i = 0 ; i < nums.size()-1 ; i++){
            prefix[i+1] = prefix[i]*nums[i];
            postfix[nums.size()-2-i] = postfix[nums.size()-1-i]*nums[nums.size()-1-i];
        }
        for(int i = 0 ; i < nums.size() ; i++){
            ans.push_back(prefix[i]*postfix[i]);
        }
        return ans;
    }
};