class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int officer = 1;
        int cm = 2;
        int uniqueHouseAlot{2};

        while(cm<nums.size()){
            if(nums[cm] == nums[officer - 1]){
                cm++;
                continue;
            }
            // we got something unique or 2nd time
            nums[++officer] = nums[cm++];
            uniqueHouseAlot++;
        }
        return uniqueHouseAlot;
    }
};