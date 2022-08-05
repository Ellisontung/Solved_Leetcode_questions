class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int con = 0;
        int t = 0;
        
        for(int i = 0 ; i < nums.size()-1 ; i++){
            if(nums[i+1]-nums[i]==1){
                t++;
            }else if(nums[i+1]==nums[i]){
                continue;
            }else{
                con = max(t+1,con);
                t=0;
            }
        }
        return max(con,t+1);
    }
};