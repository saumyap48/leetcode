class Solution {
public:
    string toBinary(int num) {
        string b;
        while (num > 0) {
            if (num % 2 == 0) {
                b.insert(b.begin(), '0'); 
            } else {
                b.insert(b.begin(), '1');
            }
            num /= 2;
        }
        if (b.empty()) {
            return "0"; 
        } else {
            return b;
        }
    }
    int maxGoodNumber(vector<int>& nums) {
        vector<string> binaries;
        for (size_t i = 0; i < nums.size(); ++i) {
            binaries.push_back(toBinary(nums[i]));
        }
        sort(binaries.begin(), binaries.end(), [](const string& a, const string& b) {
            return a + b > b + a;
        });
        string maxbstr;
        for (size_t i = 0; i < binaries.size(); ++i) {
            maxbstr += binaries[i];
        }

        if (maxbstr.empty()) {
            return 0; 
        } else {
            return stoi(maxbstr, nullptr, 2);
        }
    }
};
