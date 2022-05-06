class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char,int> collection_map;
        for(int i = 0 ; i < magazine.size() ; i++){
            collection_map[magazine[i]]++;
        }
        for(int j = 0; j<ransomNote.size(); j++){
            if(--collection_map[ransomNote[j]]<0) return false;
        }
        return true;
    }
};