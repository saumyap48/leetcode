class Solution {
public:
    int goals(vector<int>& nums,int goal){
        int n=nums.size();
        if(goal<0){
            return 0;
        }
        int r=0;
        int l=0;
        int sum=0;
        int count=0;
        while(r<n){
            sum=sum+nums[r];
            while(sum>goal){
              sum=sum-nums[l];
              l=l+1;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
       int numSubarraysWithSum(vector<int>& nums, int goal) {
        int x=goals(nums,goal);
        int y=goals(nums,goal-1);

        return x-y;

       }
};