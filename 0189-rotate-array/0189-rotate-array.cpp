class Solution {
public:
        void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        k = k % len; // normalize k
        
        vector<int> tmp(len);
        
        // copy last k elements to start
        for (int i = 0; i < k; i++) {
            tmp[i] = nums[len - k + i];
        }
        
        // copy first len-k elements after that
        for (int i = 0; i < len - k; i++) {
            tmp[k + i] = nums[i];
        }
        
        nums = tmp;
    }
};