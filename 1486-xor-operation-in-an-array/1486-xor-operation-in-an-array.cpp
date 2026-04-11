class Solution {
public:
    int xorOperation(int n, int start) {
        int ans{};
        vector<int> nums(n);
        for(int i =0; i<n ;++i){
            nums[i] = start + 2 * i; // nums[0] = 3+2*0= 3, 1st : 5 
            ans^=nums[i];
        }
        return ans;
    }
};