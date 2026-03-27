class Solution {
public:
    int maximumSum(vector<int>& arr) {
        if(arr.size() == 1) return arr[0];
        int nodeleteBestending = arr[0];
        int onedeleteBestending = 0;
        int res = arr[0];
        for(int i =1; i<arr.size(); ++i){
            // option 1 : going with no deleting element option
            int ch1 = arr[i] + nodeleteBestending;
            int ch2 = arr[i];
            
            // option 2: going with one deleting element option
            int ch3 = arr[i] + onedeleteBestending;
            int ch4 = nodeleteBestending; // i-1 tk ki nodeleteBestending

            nodeleteBestending = max(ch1, ch2);
            onedeleteBestending = max(ch3, ch4);

            res = max(res, max(nodeleteBestending, onedeleteBestending));
        }
        return res;
    }
};