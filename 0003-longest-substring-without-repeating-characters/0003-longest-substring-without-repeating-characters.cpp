class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int high{};
        int low{};
        int res{};
        int n = s.size();
        unordered_map<char,int> f; // freq stored of characters s
        for(high =0; high<n; ++high){
            f[s[high]]++;
            int k = high-low+1; // current window size

            // hash map size is less than current window size
            while(f.size() < k){
                f[s[low]]--;
                if(f[s[low]] == 0 ) f.erase(s[low]);
                low++;
                k--;
            }
            // only condition above loop breaks or information is correct when current window len == hashmap size
            int len = high - low + 1;
            res = max(res,len);
        }
        return res;
    }
};
