class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int zctr{};
        int octr{};
        unordered_map<int, int> h;
        int res{};

        for(int i{}; i<nums.size(); ++i){
            nums[i] ? octr++ : zctr++;
            int diff = octr - zctr;
            if(diff == 0){
                // we got perfect subarray current window
                res = max(res, i+1);
            } else if (h.find(diff) != h.end()){
                int index = h[diff];
                int length = i - index;
                res = max(res, length);
            } else{
                // put the difference with index
                h[diff] = i;
            }
        }
        return res;
    }
};