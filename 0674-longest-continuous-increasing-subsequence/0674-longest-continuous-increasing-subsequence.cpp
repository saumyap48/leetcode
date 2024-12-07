class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int count=1, maxcount=1;
        for(int i=1; i<n; i++){
         if(nums[i]>nums[i-1]){
         count++;
         }
         else{
            count=1;
         }
       maxcount=max(count,maxcount);
    }
        return maxcount;
    }
};