class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int left=0;
        int currsum=0;
        int mini=INT_MAX;
        for(int i=0; i<n; i++){
         currsum+=nums[i];
        while(currsum>=target){
        mini=min(mini,i-left+1);
        currsum-=nums[left];
        left++;
            }
        }
      return (mini==INT_MAX)? 0: mini;
    }
};