class Solution {
public:
    int maximumSwap(int num) {
        vector<int> digits;
        int temp = num;
        while (temp > 0) {
            digits.push_back(temp % 10);
            temp /= 10;
        }
        reverse(digits.begin(), digits.end()); 
        int last[10] = {0};
        for (int i = 0; i < digits.size(); i++) {
            last[digits[i]] = i;
        }
        for (int i = 0; i < digits.size(); i++) {
            for (int d = 9; d > digits[i]; d--) {
                if (last[d] > i) {  
                    swap(digits[i], digits[last[d]]);
                    int newNum = 0;
                    for (int digit : digits) {
                        newNum = newNum * 10 + digit;
                    }
                    return newNum;
                }
            }
        }

        return num;  
    }
};
