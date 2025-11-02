class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
     sort(nums.begin(), nums.end());
        vector<int> answer;

        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i + 1] - nums[i] != 1) {
                int curr = nums[i] + 1;
                while (curr < nums[i + 1]) {
                    answer.push_back(curr);
                    curr++;
                }
            }
        }

        return answer;
    }
};
