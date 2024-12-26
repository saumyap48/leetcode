class Solution {
public:
    void check(string &s, int i, int j, int &start, int &maxLen) {
        while (i >= 0 && j < s.length() && s[i] == s[j]) {
            if (j - i + 1 > maxLen) {
                start = i;
                maxLen = j - i + 1;
            }
            i--;
            j++;
        }
    }

    string longestPalindrome(string s){
        int n = s.length();
        if (n == 0) return "";

        int start = 0, maxLen = 0;

        for (int i = 0; i < n; i++) {
            check(s, i, i, start, maxLen);     // Odd-length palindrome
            check(s, i, i + 1, start, maxLen); // Even-length palindrome
        }

        return s.substr(start, maxLen);
    }
};