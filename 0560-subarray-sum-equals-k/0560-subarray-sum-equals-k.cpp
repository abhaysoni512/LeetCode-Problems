class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum{};
        int res{};
        unordered_map<int, int> f;
        // tell hash map that for empty subarray you have seen sum=0 with freq =
        // 1;
        f[0] = 1;
        for (int i{}; i < nums.size(); ++i) {
            sum += nums[i];
            int ques = sum - k;
            int freq = f[ques];
            res+=freq;
            f[sum]++;
        }
        return res;
    }
};