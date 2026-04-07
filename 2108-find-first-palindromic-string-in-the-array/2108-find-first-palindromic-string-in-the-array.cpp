class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto &word : words){
            int i = 0;
            int j = word.size() -1;
            bool ispalindromic = true;
            while(i<j){
                if(word[i] == word[j]) {
                    ispalindromic = true;
                }
                else{
                    ispalindromic = false;
                    break;
                }
                i++;
                j--;
            }
            if(ispalindromic) return word;
        }
        return "";
        
    }
};