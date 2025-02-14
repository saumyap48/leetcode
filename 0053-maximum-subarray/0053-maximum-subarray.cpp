class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int n=nums.size();
        int currsum=nums[0];
        int maxsum=nums[0];
        for(int i=1; i<n; i++){
        currsum=max(currsum+nums[i],nums[i]);
        maxsum=max(maxsum,currsum);
        }
        return maxsum;
        
    }
};