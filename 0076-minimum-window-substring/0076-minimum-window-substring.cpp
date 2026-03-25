class Solution {
public:
    bool informationCorrect(vector<int> &have, vector<int> &needed){
        for(int i=0; i<needed.size(); ++i){
            if(have[i]<needed[i]) return false;
        }
        return true;
    }

    
    string minWindow(string s, string t) {
        int high{};
        int low{};
        int res = INT_MAX;
        int starting_point_for_substring = 0;
        int window_len{};

        vector<int> needed(256);
        for(const char c: t){
            needed[c]++;
        }

        vector<int> have(256);

        for(;high<s.size(); ++high){
            have[s[high]]++;

            while(informationCorrect(have, needed)){
                window_len = high - low + 1;
                if(res > window_len){
                    res = window_len;
                    starting_point_for_substring = low;
                }
                have[s[low]]--;
                low++;    
            }

        }
        return (res==INT_MAX)? "": s.substr(starting_point_for_substring, res );
    }
};