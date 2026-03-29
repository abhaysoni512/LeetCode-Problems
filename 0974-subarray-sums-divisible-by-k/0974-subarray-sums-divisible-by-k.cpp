class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum{};
        int res{};
        unordered_map<int,int> f; // hash map will store window_sum % k
        // intially sum = 0; sum %k = 0%k = 0 , it's count = 1
        f[0] = 1;
        
        for(int i{}; i<nums.size(); ++i){
            // current sum
            sum+= nums[i];
            // current rem
            int rem = sum%k;
            if(rem<0) rem+=k;
            // check on hash map are there are any window [0,i]
            int freq = f[rem];
            res += freq;
            // for future we are storing we have seen current_sum%k 
            f[rem]++;
        }
        return res;
    }
};