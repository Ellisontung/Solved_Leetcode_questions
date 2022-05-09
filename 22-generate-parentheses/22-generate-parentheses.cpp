class Solution {
public:
    vector<string> res;
    string stack = "";
    vector<string> generateParenthesis(int n) {
        //only add ( if openN < n
        //Numbers of open always need to be greater than closed
        //stop at openN == closedN == n
        helper(0,0,n);
        return res;
    }
    void helper(int openN,int closedN,int n){
        cout<<stack<<endl;
        if(openN==n && closedN==n){
            res.push_back(stack);
        }
        
        if(openN<n){
            stack.push_back('(');
            helper(openN+1,closedN,n);
            stack.pop_back();
        }
        
        if(closedN<openN){
            stack.push_back(')');
            helper(openN,closedN+1,n);
            stack.pop_back();
        }
    }
};