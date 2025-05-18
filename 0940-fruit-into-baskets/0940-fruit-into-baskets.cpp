class Solution {
public:
    int totalFruit(vector<int>& fruits) {
           int n = fruits.size();
        int maxlength = 0;
        unordered_map<int,int>mp;
        int l = 0, r = 0;
        while (r < n) {
            mp[fruits[r]]++;
            if (mp.size() > 2) {
                while (mp.size() > 2) {
                    mp[fruits[l]]--;
                    if (mp[fruits[l]] == 0) {
                        mp.erase(fruits[l]);
                    }
                    l++;
                }
            }
            if (mp.size()<= 2) {
                maxlength = max(maxlength, r - l + 1);
            }
            r++;
        }
        return maxlength;
    }
};