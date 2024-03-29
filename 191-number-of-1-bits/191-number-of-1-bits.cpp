class Solution {
public:
    int hammingWeight(uint32_t n) {
        int ans = 0;
        while(n){
            ans = ans + n % 2;
            n = n >> 1;
        }
        return ans;
    }
};