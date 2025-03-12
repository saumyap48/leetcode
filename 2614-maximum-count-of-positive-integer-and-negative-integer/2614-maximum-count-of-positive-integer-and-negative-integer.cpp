class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int n=nums.size();
        int negativecount=0;
        int positivecount=0;
        for(int i=0; i<n; i++){
            if(nums[i]>0){
            positivecount++;
            }
        else if(nums[i]<0){
        negativecount++;
        }
        }
        int maxi=max(positivecount,negativecount);
        return maxi;
    }
};