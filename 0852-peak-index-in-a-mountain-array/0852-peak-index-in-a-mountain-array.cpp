class Solution {
public:
#define a arr
#define mid guess
    int peakIndexInMountainArray(vector<int>& arr) {
        // 0 10 5 2

        int low = 0; // 0
        int high = a.size()-1; // 3
        int ans = 1;
        while(low<=high){
            int guess = (high+low)/2; // 1
            if(arr[guess]>arr[guess+1]){ // 
                ans = guess;
                high = mid-1; // 0
            } else{
                low = mid +1;
            }
            
        }
        return ans;
    }
};