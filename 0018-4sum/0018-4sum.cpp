class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
     vector<vector<int>>answer;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n; i++){
            if(i>0 && nums[i]==nums[i-1])
            continue;
            for(int j=i+1; j<n; j++){
                if(j>i+1 &&nums[j]==nums[j-1])
                continue;
                int start=j+1;
                int end=n-1;
                while(start<end){
        long long totalsum=(long long)nums[i]+nums[j]+nums[start]+nums[end];
        if(totalsum==target){
        vector<int>temp={nums[i],nums[j],nums[start],nums[end]};
            answer.push_back(temp);
            start++;
            end--;
        while(start<end &&nums[start]==nums[start-1])start++;
        while(start<end && nums[end]==nums[end+1])end--;
                    }
                    else if(totalsum<target){
                        start++;
                    }
                    else{
                        end--;
                    }
                }
            }
        }
        return answer;
    }
};