class Solution {
public:
    void sortColors(vector<int>& nums) {
        //method 1
        //Collect the data with traversing to whole array first
    //     unordered_map<int,int> colormap;
    //     for(int i = 0 ; i < nums.size() ; i++){
    //         colormap[nums[i]]++;
    //     }
    //     vector<int> ans;
    //     for(int i = 0 ; i < colormap[0] ; i++){
    //         ans.push_back(0);
    //     }
    //     for(int i = 0 ; i < colormap[1] ; i++){
    //         ans.push_back(1);
    //     }
    //     for(int i = 0 ; i < colormap[2] ; i++){
    //         ans.push_back(2);
    //     }
    //     nums=ans;
    // }
        //method 2
        //pointer solution
        int left = 0;
        int mid = 0;
        int right = nums.size()-1;
        while(mid<=right){
            if(nums[mid]==0){
                swap(nums[mid++],nums[left++]);
            }else if(nums[mid]==1){
                mid++;
            }else if(nums[mid]==2){
                swap(nums[mid],nums[right--]);
            }
        }
    }
    
};