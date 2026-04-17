class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> r;

        for(auto &op : operations){
            if(op != "+" && op != "D" && op != "C"){
                r.push_back(stoi(op));
            } 
            else if(op == "+"){
                r.push_back(r.back() + r[r.size()-2]);
            } 
            else if(op == "D"){
                r.push_back(2 * r.back());
            } 
            else if(op == "C"){
                r.pop_back();
            }
        }

        int sum{};
        for(auto e : r){
            sum += e;
        }
        return sum;
    }
};