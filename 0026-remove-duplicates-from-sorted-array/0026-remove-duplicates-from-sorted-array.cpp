class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int officer{};
        int uniqueNo{1};
        int cm{1};
        while(cm<nums.size()){
            if(nums[cm]==nums[cm-1]){
                cm++;
                continue;
            }
            nums[++officer] = nums[cm++];
            uniqueNo++;   
        }
        return uniqueNo;
    }
};