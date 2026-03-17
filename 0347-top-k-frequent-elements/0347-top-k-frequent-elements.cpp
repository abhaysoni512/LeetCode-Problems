class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        
        for (const auto n : nums){
            freq[n]++;
        }

        priority_queue<pair<int,int>> pq;
        for(const auto &p : freq){
            pq.push({p.second,p.first});
        }

        vector<int> ans;
        
        while(k--){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
        
        
    }
};