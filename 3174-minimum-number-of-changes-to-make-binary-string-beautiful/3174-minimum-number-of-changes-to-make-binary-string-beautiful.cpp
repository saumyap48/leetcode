class Solution {
public:
    int minChanges(string s) {
        int ans = 0;
        int len = s.length();
        int currcount = 1;
        char currelem = s[0];

        for (int i = 1; i < s.length(); i++) {
            if (s[i] == currelem) {
                currcount++;
            } else {
                if (currcount & 1  != 0) {
                    ans++;
                    currcount++;
                } else {
                    currelem = s[i];
                    currcount = 1;
                }
            }
        }
        return ans;
    }
};