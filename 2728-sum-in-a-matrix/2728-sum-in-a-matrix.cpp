class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        vector<vector<int>> temp;
        for(int i = 0; i < nums.size(); i++){   
            sort(nums[i].begin(), nums[i].end());
            temp.push_back(nums[i]);
        }
        int res = 0; 
        int m = temp.size();
        int  n = temp[0].size();
        
        for(int i = 0; i < n; i++){
            int maxi = INT_MIN;
            for(int j = 0; j < m; j++){
                maxi = max(maxi, temp[j][i]);
            }
            res += maxi;
        }
        return res;
    }
};
