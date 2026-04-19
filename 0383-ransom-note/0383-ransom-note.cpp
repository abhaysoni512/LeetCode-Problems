class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char,int> f;
        for(auto c : magazine){
            f[c]++;
        }

        for(auto c : ransomNote){
            if(f.find(c) == f.end()){
                return false;
            }
            // if i found out key
            f[c]--;
            if(f[c] == 0) f.erase(c);
        }
        return true;
    }
};