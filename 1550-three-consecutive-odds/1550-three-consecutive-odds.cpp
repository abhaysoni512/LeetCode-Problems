class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        int prev = arr[0]; // 1
        for(int i{1}; i<arr.size()-1; ++i){
            int curr = arr[i]; // 
            int next = arr[i+1]; // 
            // odd + odd+ odd = odd
            if((prev%2 !=0) && (curr%2 != 0) && (next%2 !=0)) return true;
            prev = curr; 
        }
        return false;

    }
};