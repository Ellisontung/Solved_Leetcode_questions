class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int begin = 0;
        int end = 0;
        int sum = 0; //current value
        int d = INT_MAX; //lowest number of set
        while(end < nums.size()){
            if(sum < target){
                sum += nums[end];
                end++;
            }
            while(sum >= target){
                d = min(d,end-begin);
                sum -= nums[begin];
                begin++;
            }
        }
        if(d==INT_MAX) d=0;
        return d;
    }
};