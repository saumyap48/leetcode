class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        set<pair<int,int>>uniquePairs;
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
        if(abs(nums[j]-nums[i])==k){
        uniquePairs.insert({nums[i],nums[j]});
        }
        }
        }
        return uniquePairs.size();
    }
};