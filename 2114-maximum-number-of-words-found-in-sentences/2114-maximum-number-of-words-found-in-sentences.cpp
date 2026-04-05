class Solution {
public:
    int MaxCountWord(string_view s){
        int cnt{};
        for(char c: s){
            if(c== ' ') cnt++;
        }
        return cnt+1;
    }
    int mostWordsFound(vector<string>& sentences) {
        int ans{INT_MIN};
        for(int i{}; i<sentences.size(); ++i){
            int maxCount{};
            maxCount = MaxCountWord(sentences[i]);
            ans = max( ans, maxCount);
        }
        return ans;
    }
};