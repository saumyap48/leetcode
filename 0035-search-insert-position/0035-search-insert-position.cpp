class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int index=n;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]>=target){
                index=mid;
            high=mid-1;
            }
            else{
            low=mid+1;
        }
    }
    return index;
}
};
        