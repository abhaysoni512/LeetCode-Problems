class Solution {
public:
    int trailingZeroes(int n) {
        // Brute force
        if(n<5) return 0;
        else{
            int cnt =0; 
            int div2 = 5;
            
            while(n){
               n/=5;
               cnt +=n;

            }

            return cnt;

        }
    }
};