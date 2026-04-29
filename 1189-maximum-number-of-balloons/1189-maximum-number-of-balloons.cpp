class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> need;
        unordered_map<char,int> have;

        for(char c : string("balloon")){
            need[c]++;
        }
        
        for(char c : text){
            have[c]++;
        }

        int mini = INT_MAX;
        for(auto &p : need){
            mini = min(have[p.first] / p.second, mini);
        }

        return mini;
    }
};