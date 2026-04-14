class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int Alice_Sum{};
        int Bob_Sum{};
        // ch1 : alice chose single digit
        // ch2 : alice chose double digit num
        for(auto ele : nums){
            if(ele<10){
                Alice_Sum+=ele;
            } else{
                Bob_Sum+=ele;
            }
        }
        if(Alice_Sum == Bob_Sum) return false;
        return true;
        
    }
};