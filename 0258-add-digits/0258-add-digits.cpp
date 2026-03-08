class Solution {
public:
    int addDigits(int num) {
        int ans , rem;
        while(num>9){
            ans = 0;
            while(num){
                rem = num %10;
                num/=10;
                ans+=rem;
            }
            num = ans;
        }
        return num;
    }
};