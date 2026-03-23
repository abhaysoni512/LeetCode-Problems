class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        auto& f = fruits; 
        int n = f.size();
        int low{};;
        unordered_map<int,int> freq;
        int res = INT_MIN;

        for(int high{}; high<n; ++high ){
            freq[f[high]]++;

            while(freq.size()>2){
                freq[f[low]]--;
                if(freq[f[low]] == 0) freq.erase(f[low]);
                low++;
            }
            int len = high - low +1;
            res = max(res,len);
        }
        return res;
    }
};