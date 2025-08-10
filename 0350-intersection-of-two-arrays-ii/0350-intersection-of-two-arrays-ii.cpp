class Solution {
public:
    vector<int> intersect(vector<int>& num1, vector<int>& num2) {
       // best way sare unique element
       unordered_multiset <int> n1_s {num1.begin(),num1.end()};
        // 1 2 2 1
        //
       vector<int> rs;

       for(int i=0;i<num2.size();i++){
        auto it = n1_s.find(num2[i]);
        if(it!=n1_s.end()){
            n1_s.erase(it);
            rs.push_back(num2[i]);
        }
       }
       return rs;


    }
};