class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp(3,-1);
        sort(nums.begin(), nums.end());
        int l = 1;
        int r = nums.size()-1;
        int threeSome;
        for(int i = 0 ; i < nums.size() ; i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            l=i+1;
            r=nums.size()-1;
            while(l<r){
                
                threeSome = nums[i] + nums[l] + nums[r];
                if(threeSome>0){
                    r--;
                }else if(threeSome<0){
                    l++;
                }else{
                    temp[0] = nums[i];
                    temp[1] = nums[l];
                    temp[2] = nums[r];
                    ans.push_back(temp);
                    l++;
                    while(nums[l] == nums[l-1] && l<r)
                        l++;
                }
            }
        }
        return ans;
    }
};