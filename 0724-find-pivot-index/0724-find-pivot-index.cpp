class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        int sum{};
        for(auto ele : nums){
            sum +=ele;
        }
        // for zero index : left = 0
        int left{};
        int right = sum - left - nums[0];
        if(left == right ) return 0;

        for(int i{1}; i<nums.size(); ++i){
            left += nums[i-1];
            right = sum - left - nums[i];
            if(left == right ) return i;
        }
        return -1;
    }
};