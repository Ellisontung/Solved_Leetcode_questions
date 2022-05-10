class Solution {
public:
    int search(vector<int>& nums, int target) {
        int right = nums.size()-1;
        int left = 0;
        int middle;
        while(left<=right){
            middle = (left+right)/2;
            if(nums[middle]==target){
                return middle;
            }else if(nums[middle]<target){
                //search right
                left = middle+1;
            }else if(nums[middle]>target){
                //search left
                right = middle-1;
            }
        }
        return -1;
    }
};