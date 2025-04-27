class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i <= n - 3; i++) {
            if ((nums[i] + nums[i+2]) == (nums[i+1]/ 2.0)) { // 
                count++;
            }
        }
        return count; // Total count return karo
    }
};

