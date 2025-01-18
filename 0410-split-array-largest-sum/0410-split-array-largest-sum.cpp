class Solution {
public:
    int countpartition(vector<int>&nums,int maxsum){
        int partition=1;
        long long subarraysum=0;
        for(int num:nums){
        if(subarraysum+num<=maxsum){
            subarraysum+=num;
        }else{
            partition++;
            subarraysum=num;
        }
    }
    return partition;
}
    int splitArray(vector<int>& nums, int k) {
      int low=*max_element(nums.begin(),nums.end());
      int high=accumulate(nums.begin(),nums.end(),0);
      while(low<high){
        int mid=low+(high-low)/2;
        if(countpartition(nums,mid)<=k){
            high=mid;
        }else{
            low=mid+1;
        }
      }
      return low;
    }
};