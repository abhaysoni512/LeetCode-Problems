class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> need(256, 0), have(256, 0);

        for(char c : t)
            need[c]++;

        int required = t.size();
        int formed = 0;

        int low = 0;
        int res = INT_MAX;
        int start = 0;

        for(int high = 0; high < s.size(); ++high) {
            char c = s[high];
            have[c]++;

            if(have[c] <= need[c])
                formed++;

            while(formed == required) {
                int len = high - low + 1;

                if(len < res) {
                    res = len;
                    start = low;
                }

                char leftChar = s[low];
                have[leftChar]--;

                if(have[leftChar] < need[leftChar])
                    formed--;

                low++;
            }
        }

        return res == INT_MAX ? "" : s.substr(start, res);
    }
};