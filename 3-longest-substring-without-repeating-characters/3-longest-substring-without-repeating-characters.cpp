class Solution {
public:
    //Sliding windows problems
    //two pointers move with the same directions and do not overtake each other.
    //Time complexity: O(n)
    int lengthOfLongestSubstring(string s) {
        vector<int> map(128,0);
        // unordered_map<char,int> map;
        // for (auto c : s) map[c] = 0;
        int counter=0, begin=0, end=0, d=0; 
        while(end<s.size()){
            if(map[s[end++]]++>0) counter++; 
            while(counter>0){
                if(map[s[begin++]]-->1)
                    counter--;
                } 
            d=max(d, end-begin);
        }
        return d;
    }
};