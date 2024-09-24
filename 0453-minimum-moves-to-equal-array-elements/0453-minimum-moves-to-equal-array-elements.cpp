class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int mini=INT_MAX;
        int ans=0;
        for(int i:nums)
            mini=min(mini,i);
        for(int i:nums)
        ans+=i-mini;
        
        return ans;
    }
};