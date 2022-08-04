class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        int i = 0;
        int j = numbers.size()-1;
        int add;
        while(i<j){
            add = numbers[i]+numbers[j];
            if(add>target){
                j--;
            }else if(add<target){
                i++;
            }else{
                ans[0] = i + 1;
                ans[1] = j + 1;
                break;
            }
        }
        return ans;
    }
};