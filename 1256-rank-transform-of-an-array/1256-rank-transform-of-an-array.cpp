class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums = arr;
        unordered_map<int, int> mp;
        sort(nums.begin(), nums.end());

        for(int i = 0; i < nums.size(); i++){
            if(mp.find(nums[i]) == mp.end()){
                mp[nums[i]] = mp.size() + 1;
            }
        }

        for(int i = 0; i < arr.size(); i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};
