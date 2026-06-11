class Solution {
public:
#define a nums
#define x target
#define mid guess
    vector<int> searchRange(vector<int>& nums, int target) {
        int low = 0;
        int high = a.size() - 1;
        vector<int> ans{-1, -1};

        while (low <= high) {
            int guess = (low + high) / 2;
            if (a[guess] == x) {
                int fp = guess;
                int lp = guess;
                while (fp > 0 && a[fp] == a[fp - 1]) {
                    fp--;
                }
                ans[0] = fp;
                while (lp < a.size() - 1 && a[lp] == a[lp + 1]) {
                    lp++;
                }
                ans[1] = lp;
                return ans;
            } else if (a[guess] < x) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return ans;
    }
};