class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        // sort first
        sort(a.begin(),a.end());
        
        vector<vector<int>> ans;
        int n = a.size();
        for(int i{}; i< n - 2; ++i){
            if(i > 0 && a[i] == a[i-1]) continue;
            int sum = (-1) * a[i];
            int left = i+1;
            int right = n-1;
            while(left<right){
                int s = a[left] + a[right];
                if(s == sum){
                    ans.push_back({a[i],a[left],a[right]});
                    left++;
                    right--;
                    while(left<n-1 && a[left]== a[left-1]) left++;
                    while(right>=0 && a[right]== a[right+1]) right--;
                } else if(s<sum) left++;
                else right--;
            }
        }
        return ans;
    }
};