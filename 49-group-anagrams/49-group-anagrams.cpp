class Solution {
public:
//     TLE, pass 107 examples
//     vector<vector<string>> groupAnagrams(vector<string>& strs) {
//         vector<vector<string>> ans;
//         if(strs.size()==0) return ans;
        
//         vector<unordered_map<char,int>> map_collection;
        
//         unordered_map<char,int> first_map = make_map(strs[0]);
//         vector<string> first_string;
//         map_collection.push_back(first_map);
//         first_string.push_back(strs[0]);
//         ans.push_back(first_string);
//         for(int i = 1 ; i < strs.size() ; i++){
//             unordered_map<char,int> follow = make_map(strs[i]);
//             int exist = check_same(map_collection,follow);
//             if(exist!=-1){
//                 ans[exist].push_back(strs[i]);
//             }else{
//                 vector<string> content;
//                 content.push_back(strs[i]);
//                 map_collection.push_back(follow);
//                 ans.push_back(content);
//             }
//         }
//         return ans;
//     }
    
//     int check_same(vector<unordered_map<char,int>> map_collection,unordered_map<char,int>map){
//         for(int i = 0 ; i < map_collection.size() ; i++){
//             if(map==map_collection[i])return i;
//         }
//         return -1;
//     }
    
//     unordered_map<char,int> make_map(string s){
//         unordered_map<char,int> form;
//         for(int i = 0 ; i < s.size() ; i++){
//             form[s[i]] ++;
//         }
//         return form;
//     }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> collection_map;
        vector<vector<string>> ans;
        for(string s : strs){
            string t = s;
            sort(t.begin(),t.end());
            collection_map[t].push_back(s);
        }
        for(auto t : collection_map){
            ans.push_back(t.second);
        }
        return ans;
    }
    
};