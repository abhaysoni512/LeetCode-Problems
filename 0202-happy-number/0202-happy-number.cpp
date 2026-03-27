class Solution {
public:
    int sqSum(int n) {
        int sum{};
        while (n) {
            int digit = n % 10;
            sum += digit * digit;
            n = n / 10;
        }
        return sum;
    }
    bool isHappy(int n) {
        if (n == 1)
            return true;
        int slow{n};
        int fast{n};

        while (fast != 1) {
            slow = sqSum(slow);
            fast = sqSum(fast);
            fast = sqSum(fast);

            if (slow == fast && slow != 1)
                return false;
        }
        return true;
    }
};