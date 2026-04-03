class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> f;
        for(auto c:s){
            f[c]++;
        }
        for(int i{}; i<s.size(); ++i){
            if(f[s[i]]== 1) return i;
        }
        
        
        return -1;

    }
};