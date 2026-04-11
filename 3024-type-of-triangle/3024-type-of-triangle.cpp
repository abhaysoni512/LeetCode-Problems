class Solution {
public:
    string triangleType(vector<int>& nums) {
        int a = nums[0];
        int b = nums[1];
        int c = nums[2];
        int s1 = a+b;
        int s2 = b+c;
        int s3 = a+c;

        if(s1 > c && s2 > a && s3 > b){
            // triangle will be formed
            if( (a==b) && (b==c)) return "equilateral";
            else if( (a==b) || (b==c) || (a==c) ) return "isosceles";
            return "scalene";    
        } else{
            return "none";
        }
    }
};