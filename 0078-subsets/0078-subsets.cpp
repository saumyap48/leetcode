class Solution {
public:
    void func(int ind, int n, vector<int> &nums, vector<int> &arr, vector<vector<int>> &ans) {
        if (ind == n) {
            ans.push_back(arr);
            return;
        }
        arr.push_back(nums[ind]);
        func(ind + 1, n, nums, arr, ans);
        arr.pop_back();
        func(ind + 1, n, nums, arr, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>answer;
        vector<int>array;
        func(0,nums.size(),nums,array,answer);
        return answer;
    }
};