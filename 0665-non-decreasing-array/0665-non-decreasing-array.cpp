class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        int modification=0;
        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1]){
                modification++;
            if(modification>1){
                return false;
            }
            if (i==0 || nums[i - 1] <= nums[i + 1]) {
                    nums[i] = nums[i + 1];
                } else {
                    nums[i + 1] = nums[i]; 
                }
            }
        }

        return true;
    }
};