class Solution {
public:
    int search(vector<int>& nums, int target) {
        if(nums.size()==1){
            if(nums[0]==target){
                return 0;
            }else{
                return -1;
            }
        }
        int k = find_k(nums);
        int l,r,m;
        if(k==0){
            l = 0;
            r = nums.size()-1;
        }else if(target >= nums[0] && target<= nums[k-1]){
            l = 0;
            r = k-1;
        }else{
            l = k;
            r = nums.size()-1;
        }
        return bs(nums,l,r,target);
    }
    
    int bs(vector<int>&nums,int l,int r,int target){
        int m;
        while(l<=r){
            m=(r+l)/2;
            if(nums[m]==target){
                return m;
            }else if(nums[m]<target){
                l = m+1;
            }else{
                r = m-1;
            }
        }
        return -1;
    }
    int find_k(vector<int>& nums){
        int l = 0;
        int r = nums.size()-1;
        int m;
        while(l<r){
            int mid=(l+r)/2;
            if(nums[mid]>nums[r]) l=mid+1;
            else r=mid;
        }
        return l;
    }
    
};