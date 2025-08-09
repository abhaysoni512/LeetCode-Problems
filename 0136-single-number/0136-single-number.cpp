class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(const auto ele : nums){
            freq[ele]++;
        }
        for(const auto eleMp : freq){
            if(eleMp.second == 1) return eleMp.first;
        }
        return -1;

    }
};