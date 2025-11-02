class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        vector<int> bravendil = nums;
        int n = nums.size();
        const int LIMIT = 100000;

        sort(bravendil.begin(), bravendil.end(), [](int a, int b) {
            return abs(a) > abs(b);
        });

        vector<int> top3(bravendil.begin(), bravendil.begin() + 3);
        bool hasZero = count(nums.begin(), nums.end(), 0);

        if (hasZero && find(top3.begin(), top3.end(), 0) == top3.end())
            top3[2] = 0;

        int minIdx = 0;
        for (int i = 1; i < 3; i++)
            if (abs(top3[i]) < abs(top3[minIdx])) minIdx = i;

        vector<int> rem;
        for (int i = 0; i < 3; i++)
            if (i != minIdx) rem.push_back(top3[i]);

        int negCount = 0;
        for (int x : rem)
            if (x < 0) negCount++;

        int replaceVal = (negCount == 2 || negCount == 0) ? LIMIT : -LIMIT;
        top3[minIdx] = replaceVal;

        long long res = 1LL * top3[0] * top3[1] * top3[2];
        return res;
    }
};
