class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1,mp2;
        for(int i = 0 ; i < s.size() ; i++){
            mp1[s[i]]++;
        }
        for(int j = 0 ; j < t.size() ; j++){
            mp2[t[j]]++;
        }
        return mp1==mp2;
    }
};