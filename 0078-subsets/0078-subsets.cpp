class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        int s=1<<n;
        vector<vector<int>>powerset(s);
        for(int m=0; m<s; m++){
            for(int i=0; i<n; i++){
                if(m&(1<<i))
                powerset[m].push_back(nums[i]);
            }
        }
        return powerset;
    }
};