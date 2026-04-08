class Solution {
public:
    int countDigits(int num) {
        int tmp{num};
        int ctr = 0;
        while(tmp){
            int uDigit = tmp%10;
            if(num % uDigit == 0) ctr++;
            tmp/=10;
        }
        return ctr;
    }
};