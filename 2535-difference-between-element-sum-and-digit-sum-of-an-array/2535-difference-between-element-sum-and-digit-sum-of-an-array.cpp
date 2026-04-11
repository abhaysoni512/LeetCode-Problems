class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int eleSum{};
        int digitSum{};
        for(auto num : nums){
            eleSum += num;
            while(num){
                digitSum += num%10;
                num=num/10;
            }
        }
        return abs(eleSum-digitSum);
    }
};