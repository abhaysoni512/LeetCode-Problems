class Solution {
public:
    int threeSumClosest(vector<int>& a ,int target) {
        // sort first
        sort(a.begin(), a.end());

        int closest = a[0] + a[1] + a[2]; 

        int n = a.size();

        for (int i{}; i < n - 2; ++i) {
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                
                int current_total = a[i] + a[left] + a[right];
                if(abs(current_total - target) < abs(closest - target)){
                    closest = current_total;
                }
                if (current_total == target) {
                    return target; 
                } else if (current_total < target){
                    left++;
                }
                else{
                    right--;
                }
            }
        }
        return closest;
    }
    
};