class Solution {
public:
#define nums a
#define x target
    int search(vector<int>& nums, int target) {
        int low{};
        int high = a.size() -1;
        while(low<=high){
            int guess = (low+high)/2;
            if(a[guess] == x) return guess;
            else if(a[guess] < x) low = guess+1;
            else high = guess-1;
        }
        return -1;
    }
};