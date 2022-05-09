class Solution {
public:
    vector<string> map = {"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> ans;
    vector<string> letterCombinations(string digits) {
        if(digits=="") return ans;
        recur(digits,"",0);
        return ans;
    }
    
    void recur(string &digits,string combine,int i){
        if(i==digits.size()){
            ans.push_back(move(combine));
        }else{
            for (auto c: map[digits[i]-'2']){
                recur(digits,combine+c,i+1);
            }
        }
    }
};