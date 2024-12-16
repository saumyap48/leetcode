class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        unordered_map<int,int>mp;
         for(int num:nums){
            mp[num]++;
         }
        for(auto it:mp){
            if(it.second==1){
                sum+=it.first;
            }
        }
       return sum;
    }
};