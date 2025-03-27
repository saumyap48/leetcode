class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
                int n=nums.size();
        if(n==0) return 0;
        sort(nums.begin(),nums.end());
        int lastsmaller=INT_MIN;
        int count=0;
        int longest=1;
        for(int i=0; i<n; i++){
            if(nums[i]-1==lastsmaller){
                count++;
                lastsmaller=nums[i];
            }
            else if(nums[i]!=lastsmaller){
                count=1;
                lastsmaller=nums[i];
            }
          longest=max(longest,count);
        }
        return longest;
    }
};
     