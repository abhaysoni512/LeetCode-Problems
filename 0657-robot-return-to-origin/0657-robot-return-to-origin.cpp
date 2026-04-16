class Solution {
public:
    bool judgeCircle(string moves) {
        int x{},y{};
        for(auto ele : moves){
            if(ele == 'U') y++;
            else if(ele == 'R') x++;
            else if(ele == 'D') y--;
            else{
                x--;
            }
        }
        return (x==0 && y==0);
    }
};