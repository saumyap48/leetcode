class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==0){
            return 0;
        }
        int increasing=1;
        int decreasing=1;
        int maxi=1;
        for(int i=1; i<n; i++){
            if(nums[i]>nums[i-1]){
                increasing++;
                decreasing=1;
            }
            else if(nums[i]<nums[i-1]){
                decreasing++;
                increasing=1;
            }
            else{
            increasing=decreasing=1;
            }
            maxi=max(maxi,max(increasing,decreasing));
        }
        return maxi;
    }
};