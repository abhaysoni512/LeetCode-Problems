class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPriceSoFar = prices[0];
        int maxProfit=0;
        for(int day{0};day<prices.size();day++){
            if(prices[day]<minPriceSoFar){
                minPriceSoFar = prices[day];
            }
            //if i sold today compare it with our maxProfit
            if(prices[day]-minPriceSoFar>maxProfit){
                maxProfit = prices[day]-minPriceSoFar;
            }
        }
        return maxProfit;
    }
};