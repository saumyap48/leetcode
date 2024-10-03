class Solution {
public:
    int goals(vector<int>& nums,int k){
        int n=nums.size();
        if(k<0){
            return 0;
        }
        int r=0;
        int l=0;
        int sum=0;
        int count=0;
        while(r<n){
            sum=sum+(nums[r])%2;
            while(sum>k){
              sum=sum-(nums[l])%2;
              l=l+1;
            }
            count=count+(r-l+1);
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
         int x=goals(nums,k);
        int y=goals(nums,k-1);
        return x-y;
    }
};