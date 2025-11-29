class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int sum=0;
        for(int i=0; i<n; i++){
             sum+=nums[i];
        }
        if(sum<k){
            return sum;
        }else{
            return sum%k;
        }
    }
};