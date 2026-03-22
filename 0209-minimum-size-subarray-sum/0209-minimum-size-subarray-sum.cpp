class Solution {
public:
    int minSubArrayLen(int target, vector<int>& a) {
        int n = a.size();
        int high{};
        int low{};
        int sum{};
        int res = INT_MAX;
        bool target_meet{};
        while (high <= n - 1) {
            sum = sum + a[high]; // let's say we got sum >= target, now we will
                                 // fire employee
            // firing
            while (sum >= target){
                // target_meet
                target_meet = true;
                // fire krte time note bhi krna h kitne kam bande m ho gya kaam
                int len = high-low +1;
                res = min(res,len);

                sum = sum - a[low];
                low++; 
            }
            // rehire krna pdega means agle bande chahiye so high++
            high++;
        }
        if(target_meet == false) return 0;
        return res;
    }
};