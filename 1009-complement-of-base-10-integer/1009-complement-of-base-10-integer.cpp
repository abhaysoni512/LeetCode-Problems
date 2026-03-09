class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int tmp = n;
        
        int mask = 0;
        while(tmp){
            mask = (mask<<1) | 1;
            tmp /=2;
        }
        return n ^ mask;
    }
};