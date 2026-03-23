class Solution {
public:
    int maxi(vector<int> &f) {
        int maxf = INT_MIN;
        for (auto ele : f) {
            maxf = max(maxf, ele);
        }
        return maxf;
    }
    int characterReplacement(string s, int k) {
        int high{};
        int low{};
        int res = 0;
        vector<int> f(256);
        for (high = 0; high < s.size(); ++high) {
            f[s[high]]++;

            int len = high - low + 1;

            int maxFreq = maxi(f);

            int diff = len - maxFreq;

            while (diff > k) {
                f[s[low]]--;
                low++;

                maxFreq = maxi(f);
                len--;
                diff--;

            }

            len = high-low+1;
            res = max(res,len);
        }
        return res;
    }
};