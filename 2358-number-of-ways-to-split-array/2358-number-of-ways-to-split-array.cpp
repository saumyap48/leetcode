class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n=nums.size();
        long long totalsum=0;
        for(int x:nums){
            totalsum+=x;
        }
         int count=0;
         long long start=0;
         for(int i=0; i<n-1; i++){
           start+=nums[i];
        long long right=totalsum-start;
        if(start>=right){
            count++;
        }
         }
         return count;
    
    }
};