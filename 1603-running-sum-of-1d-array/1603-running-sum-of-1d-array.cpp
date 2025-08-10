class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rs;
        int sum = 0;
        for(const auto &num : nums){
            sum +=num;
            rs.emplace_back(sum);
        }
        return rs;
    }
};