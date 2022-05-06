class Solution {
public:
    int countSubstrings(string s) {
        int sum = 0;
        if(s.size()==0) return 0;
        if(s.size()==1) return 1;
        for(int i = 0 ; i <s.size();i++){
            for(int j = 0; j<2;j++){
                sum+=checkPalindromic(s,i,i+j);
            }
        }
        return sum;
    }
    int checkPalindromic(string s,int x,int y){
        int count = 0;
        for(int i = 0; i<s.size();i++){
            if(x-i<0||y+i>s.size()){
                return count;
            }
            if(s[x-i]!=s[y+i])
                return count;
            else{
                count++;
            }
        }
        return 0;
    }
};