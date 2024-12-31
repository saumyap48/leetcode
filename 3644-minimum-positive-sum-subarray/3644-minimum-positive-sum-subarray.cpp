class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        int mini=INT_MAX;
        for(int i=0; i<n; i++){
          int currsum=0;
        for(int j=i; j<n; j++){
            currsum+=nums[j];
          int length=j-i+1;
        if(length>=l && length<=r && currsum>0){
          mini=min(mini,currsum);
        }
        }
        }
        return mini==INT_MAX ? -1: mini;
    }
};