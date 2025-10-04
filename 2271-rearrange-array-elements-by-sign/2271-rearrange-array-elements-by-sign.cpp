class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> ans(nums.size(),0);
        int posNoIndex = 0, negNoIndex = 1;
        for(int i =0; i<nums.size();i++){
            if(nums[i]<0){
                ans[negNoIndex] = nums[i];
                negNoIndex+=2;
            }else{
                ans[posNoIndex] = nums[i];
                posNoIndex+=2;
            }
        }
        return ans;

    }
};