class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        if(nums.size() == 2) return nums[0];
        int slow{0};
        int fast{0};

        while(true){
            // slow will move 1 next
            slow = nums[slow];

            // fast will move twice
            fast = nums[fast];
            fast = nums[fast];
            // we got meetup point
            if(slow == fast){
                slow = 0;
                while(slow !=fast){
                    slow = nums[slow];
                    fast = nums[fast];
                }
                return slow; // we got starting point means repeated element;
            }
        }
    }
};