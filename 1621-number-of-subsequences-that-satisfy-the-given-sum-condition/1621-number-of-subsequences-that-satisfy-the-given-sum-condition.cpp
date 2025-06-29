class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        int n=nums.size();
        int mod=1e9+7;
        sort(nums.begin(),nums.end());
        vector<int>power(n,1);
        for(int i=1; i<n; i++){
            power[i]=(power[i-1]*2)%mod;
        }
        int answer=0;
        int low=0;
        int high=n-1;
        while(low<=high){
       if(nums[low]+nums[high]<=target){
        answer=(answer+power[high-low])%mod;
        low++;
       }else{
        high--;
       }
        }
        return answer;
    }
};