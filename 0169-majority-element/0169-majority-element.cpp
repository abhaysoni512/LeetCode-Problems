class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele, cnt = 0;
        for(int i=0;i<nums.size();i++){
            if(cnt == 0 ){
                ele = nums[i];
                cnt++;
            }else if(ele == nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        // verify that element is majority or not
        int res = 0;
        for(int i = 0;i<nums.size();i++){
            if(nums[i] == ele) res++;
        }
        if(res > nums.size()/2) return ele;
        return -1;
    }
};