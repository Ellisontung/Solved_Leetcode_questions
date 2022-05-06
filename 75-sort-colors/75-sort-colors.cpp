class Solution {
public:
    void sortColors(vector<int>& nums) {
        unordered_map<int,int> colormap;
        for(int i = 0 ; i < nums.size() ; i++){
            colormap[nums[i]]++;
        }
        vector<int> ans;
        for(int i = 0 ; i < colormap[0] ; i++){
            ans.push_back(0);
        }
        for(int i = 0 ; i < colormap[1] ; i++){
            ans.push_back(1);
        }
        for(int i = 0 ; i < colormap[2] ; i++){
            ans.push_back(2);
        }
        nums=ans;
    }
    
    
};