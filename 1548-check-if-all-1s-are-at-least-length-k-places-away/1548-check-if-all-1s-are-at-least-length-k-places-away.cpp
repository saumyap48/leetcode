class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
         int n=nums.size();
         for(int i=0; i<n; i++){
            if(nums[i]==1){
            for(int j=i+1; j<n; j++){
                if(nums[j]==1){
                if((j-i-1)<k){
                   return false;
                }
                break;
            }
         }
            }
         }
         return true;
    }
};