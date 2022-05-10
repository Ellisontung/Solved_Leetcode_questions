class Solution {
public:
    vector<vector<int>> res;
    vector<int> stack;
    vector<vector<int>> combine(int n, int k) {
        backtrack(0,n,k);
        return res;
    }
    void backtrack(int start,int n, int k){
        //Push a bigger number in a combine vector every time.
        //Pop the least num and push a bigger num.
        //if size == k push to result vector.
        if(stack.size()==k){
            res.push_back(stack);
        }
        
        if(stack.size()<k){
            for(int i = start ; i < n ;i++){
                stack.push_back(i+1);
                backtrack(i+1,n,k);
                stack.pop_back();
            }
        }
    }
};