class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        if(intervals.size() == 0) return {newInterval};
        vector<vector<int>> res;
        vector<vector<int>> final_res;

        int i = 0;
        int n = intervals.size();
        // for merge not required end1 < start2
        // [[1,2],[3,5],[6,7],[8,10],[12,16]]
        // newInterval = [4,8]
        while(i<n && intervals[i][0]<newInterval[0]){
            res.push_back(intervals[i]); // res [[1,2],[3,5]]
            i++;
        }
        res.push_back({newInterval[0],newInterval[1]});
        while(i<n){
            res.push_back(intervals[i]);
            i++;
        }
        int start1 = res[0][0];
        int end1 = res[0][1];
        
        for(int i = 1 ; i<res.size();++i){
            int start2 = res[i][0];
            int end2 = res[i][1];
            if(end1>=start2){
                end1 = max(end1,end2);
                continue;
            } else{
                final_res.push_back({start1, end1});
                start1 = start2;
                end1 = end2;
            }
        }
        final_res.push_back({start1, end1});
        return final_res;

    }
};