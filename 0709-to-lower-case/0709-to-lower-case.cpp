class Solution {
public:
    string toLowerCase(string s) {
        for(int i{}; i<s.size(); ++i){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = s[i]+32;
            }
        }
        return s;
    }
};