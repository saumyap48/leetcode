class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int minPrefixsum=0,maxPrefixsum=0;
        int prefixsum=0;
        for(int i=0; i<nums.size(); i++){
            prefixsum+=nums[i];
            minPrefixsum=min(minPrefixsum,prefixsum);
            maxPrefixsum=max(maxPrefixsum,prefixsum);
        }
        return maxPrefixsum-minPrefixsum;
    }
};