class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int diff=0;
         int n=nums.size();
         if(n<2)
         return 0;
        for(int i=1; i<n; i++){
            if(nums[i]-nums[i-1]>diff){
                diff=nums[i]-nums[i-1];
            }
        }
        return diff;
    }
};