class Solution {
public:
    int numberOfEmployeesWhoMetTarget(vector<int>& hours, int target) {
        int ans{};
        for(auto hour : hours){
            if(hour >= target) ans++;
        }
        return ans;
    }
};