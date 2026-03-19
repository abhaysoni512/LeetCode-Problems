class Solution {
public:
    auto squareVector(vector<int>& nums){
        for(int i = 0; i<nums.size(); ++i){
                nums[i] = nums[i] * nums[i];
        }
        return nums;
    }

    void mergeSort(vector<int>& res, vector<int>& pos, vector<int>& neg){
        squareVector(pos);
        squareVector(neg);
        reverse(neg.begin(),neg.end());
        int i{},j{},k{};
        while(i<pos.size() && j<neg.size()){
            if(pos[i] < neg[j]) {
                res[k++] = pos[i++];
            }
            else{
                res[k++] = neg[j++];
            }
        } 
        while(i<pos.size()){
            res[k++] = pos[i++];
        }
        while(j<neg.size()){
            res[k++] = neg[j++];
        }

    }

    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> pos;
        vector<int> neg;

        for(const auto ele : nums){
            if(ele<0) neg.push_back(ele);
            else pos.push_back(ele);
        }
        if(pos.empty()){
            squareVector(nums);
            reverse(nums.begin(),nums.end());
            return nums;
        } else if(neg.empty()){ 
            return squareVector(nums);
        }
        mergeSort(nums, pos, neg);
        return nums;
    }

};

