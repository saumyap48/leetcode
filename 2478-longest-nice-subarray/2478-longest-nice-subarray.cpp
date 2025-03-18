class Solution {
public:
    static bool isNice(int i, int j, vector<int>& arr) {
        if (i > j) return false;
        int mask = 0;
        for (int k = i; k <= j; k++) {
            if ((arr[k] & mask) != 0) {
                return false;
            }
            mask |= arr[k]; 
        }
        return true;
    }

    int longestNiceSubarray(vector<int>& nums) {
        int maxLen = 1;
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i; j < nums.size(); j++) {
                if (isNice(i, j, nums)) {
                    maxLen = max(maxLen, j - i + 1);
                } else {
                    break;  
                }
            }
        }
        return maxLen;
    }
};