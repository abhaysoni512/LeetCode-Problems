class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        if(nums.size() == 2) return{max(nums[0], nums[1]), min(nums[0], nums[1])};
        sort(nums.begin(), nums.end()); // 2 3 4 5
        for(int i{}; i<nums.size(); i=i+2){
            swap(nums[i],nums[i+1]); // 3 2
        }
        return nums;
    }
};