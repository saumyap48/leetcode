class Solution{
public:

void func(int ind, vector<int> &arr, vector<int> &nums, vector<vector<int>> &ans) {
    // Base case: if index reaches the end of nums
    if (ind == nums.size()) {
        ans.push_back(arr);
        return;
    }
    
    // Include the current element in the subset
    arr.push_back(nums[ind]);
    func(ind + 1, arr, nums, ans);
    arr.pop_back();
    
    // Skip all duplicates of the current element
    while (ind + 1 < nums.size() && nums[ind] == nums[ind + 1]) {
        ind++;
    }
    
    // Recur for the next unique element
    func(ind + 1, arr, nums, ans);
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> arr;
    sort(nums.begin(), nums.end());
    func(0, arr, nums, ans);
    return ans;
}
};