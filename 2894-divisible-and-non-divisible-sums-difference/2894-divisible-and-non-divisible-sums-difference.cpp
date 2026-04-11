class Solution {
public:
    int differenceOfSums(int n, int m) {
        int totalSum = (n *(n+1))/2;
        int divSum{};
        for(int i{1}; i<=n; ++i){
            if(i%m == 0) {
                divSum += i;
            }
        }
        return totalSum-2*divSum;

        // 55
        // 18
        // 55-18 = 37
    }
};