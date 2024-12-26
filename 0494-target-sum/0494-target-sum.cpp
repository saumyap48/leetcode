class Solution {
public:
    int TargetSum(vector<int>&nums,int target,int i,int currsum){
        if(i==nums.size()){
            if(target==currsum){
                return 1;
            }
            else{
                return 0;
            }
        }
        int addvalue=TargetSum(nums,target,i+1,currsum+nums[i]);
        int subvalue=TargetSum(nums,target,i+1,currsum-nums[i]);

        return addvalue+subvalue;
    }
    int findTargetSumWays(vector<int>& nums, int target) {
        return TargetSum(nums,target,0,0);
    }
};