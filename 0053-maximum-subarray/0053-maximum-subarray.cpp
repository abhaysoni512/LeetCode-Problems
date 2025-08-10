class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // current sum + nums [i]> nums[i] keep growing
        // else stop
        // -2 > -3 cs -2 , -5 > 4 false , 4
        int curr_sum = 0;
        int max_sum = nums[0];
        for(const auto &num : nums){
            if(curr_sum + num > num){
                curr_sum+=num;
            }
            else{
                curr_sum =num;
            }
            if(curr_sum>=max_sum){
                max_sum = curr_sum;
            }
        }
        return max_sum;
    }
};