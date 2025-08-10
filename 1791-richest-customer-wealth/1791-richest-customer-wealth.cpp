class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth = 0;
        int sum = 0;
        for(const auto ind_cust_account : accounts){
            sum = 0;
            for(const auto ind_cust_bb:ind_cust_account ){
                sum+=ind_cust_bb;
            }
            if(max_wealth<sum){
                max_wealth = sum;
            }
        }
        return max_wealth;
    }

};