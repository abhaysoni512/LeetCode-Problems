class Solution {
public:
    int longestPalindrome(string s) {

        unordered_map<char, int> freq;
        int length{};

        for (char c : s) {
            freq[c]++;
        }

        bool odd_detect{false};

        for (auto& [key, value] : freq) {
            if (value % 2 == 0) {
                // even h to add it to answer
                length += value;
            } else {
                length += value - 1;
                odd_detect = true;
            }
        }
        if (odd_detect)
            return length + 1;
        return length;
    }
};