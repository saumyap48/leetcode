class Solution {
public:
       int firstUniqChar(string str) {
        unordered_map<char, int> frequency;
        for (int i = 0; i < str.length(); i++) {
            frequency[str[i]]++;
        }
        for (int i = 0; i < str.length(); i++) {
            if (frequency[str[i]] == 1) {
                return i;
            }
        }
        return -1;
    }
};
