class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int maxi=0;
        int answer=-1;
        for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(nums[i]>nums[j]){
                continue;
            }
            else{
                answer=nums[j]-nums[i];
            }
            maxi=max(maxi,answer);
        }
        }
        if(maxi==0){
            return -1;
        }
        return maxi;
    }
};