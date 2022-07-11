class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int LIS[nums.size()];
        for(int i = 0 ; i < nums.size() ; i++){
            LIS[i] = 1;
        }
        for (int i = nums.size()-1 ; i > -1 ; i--){
            for(int j = i ; j < nums.size() ; j++){
                if(nums[i]<nums[j]){
                    // cout<<nums[i]<<"\t"<<nums[j]<<endl;
                    LIS[i]=max(LIS[i], 1 + LIS[j]);
                }
            }
        }
        // for(int i = 0 ; i <nums.size() ; i++){
        //     cout<<LIS[i]<<" ";
        // }
        return *max_element(LIS , LIS+ nums.size()-1);
    }
};