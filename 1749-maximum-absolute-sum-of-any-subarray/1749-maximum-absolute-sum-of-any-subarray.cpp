class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int best_ending_max = nums[0];
        int best_ending_min = nums[0];
        int ans = abs(nums[0]);
        for(int i =1; i<nums.size(); ++i){
            int ch1 = best_ending_max + nums[i];
            int ch2 = nums[i];
            int ch3 = best_ending_min + nums[i];
            best_ending_max = max(ch1,ch2);
            best_ending_min = min(ch2, ch3);
            ans = max({ans, abs(best_ending_max), abs(best_ending_min)});
        }
        return ans;
    }
};