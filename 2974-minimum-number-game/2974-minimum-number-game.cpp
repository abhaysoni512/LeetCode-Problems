class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        vector<int> ans;
        if(nums.size() == 2) return{max(nums[0], nums[1]), min(nums[0], nums[1])};
        sort(nums.begin(), nums.end());
        int i{0};
        int j{1};
        // 2 3 4 5
        while(j<nums.size()){
            ans.push_back(nums[j]);
            ans.push_back(nums[i]);
            j = j+2;
            i = i+2;
        }
        return ans;
    }
};