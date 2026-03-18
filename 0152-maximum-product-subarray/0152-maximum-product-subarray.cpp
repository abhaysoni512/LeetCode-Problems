class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minEnding = nums[0];
        int maxEnding = nums[0];
        int ans = nums[0];

        int ch1, ch2, ch3;

        for(int i = 1; i<nums.size(); ++i){
            ch1 = nums[i];
            ch2 = minEnding * nums[i];
            ch3 = maxEnding * nums[i];
            // min among three
            minEnding = min(ch1, min(ch2, ch3));
            // max among three
            maxEnding = max(ch1, max(ch2, ch3));
            // current or previous needs to be carry or not
            ans = max(ans, maxEnding);
        }
        return ans;

    }
};