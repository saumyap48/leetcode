class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int counteven = 0;
        for (int num : nums) {
            int count = 0;
            // Handle the case when num is 0 separately
            if (num == 0) {
                count = 1;
            } else {
                // Count digits
                while (num != 0) {
                    num /= 10;
                    count++;
                }
            }
            if (count % 2 == 0) {
                counteven++;
            }
        }
        return counteven;
    }
};