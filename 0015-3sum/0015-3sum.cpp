class Solution {
public:
    vector<vector<int>>answer;
    void twosum(vector<int>&nums,int target,int i,int j){
        while(i<j){
            if(nums[i]+nums[j]>target)
                j--;
            else if(nums[i]+nums[j]<target)
            i++;
            else{
            while(i<j && nums[i]==nums[i+1]) i++;
            while(i<j && nums[j]==nums[j-1]) j--;
            answer.push_back({-target,nums[i],nums[j]});
            i++;
            j--;
            }
            }
        }
    vector<vector<int>> threeSum(vector<int>& nums) {
     int n=nums.size();
     if(n<3){
        return {};
     }   
     answer.clear();
     sort(begin(nums),end(nums));
     //fix the n1 number
     for(int i=0; i<=n-3; i++){
        if(i>0 && nums[i]==nums[i-1]){
        continue;
     }  
     int n1=nums[i];
     int target=-n1;
     twosum(nums,target,i+1,n-1);  
     }
     return answer;
    }
};