class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
            vector<vector<int>>answer;
         sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=0; i<n-2; i++){
            if(i>0 && nums[i]==nums[i-1])continue; 
         int target=0-nums[i];
        int start=i+1,end=n-1;
        while(start<end){
            if(nums[start]+nums[end]==target){
            answer.push_back({nums[i],nums[start],nums[end]});
            while(start<end && nums[start]==nums[start+1])start++;
            while(start<end && nums[end]==nums[end-1])end--;
            start++;
            end--; 
            }
            else if(nums[start]+nums[end]<target){
                start++;
            }
            else{
            end--;
        }
        }
    }
        return answer;
    }
};