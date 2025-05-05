class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
       vector<int>answer;
            unordered_map<int,int>mp;
            for(int i=0; i<nums.size(); i++){
             mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second==1){
                answer.push_back(it.first);
            }
        }
        sort(answer.begin(),answer.end());
        return answer;
        }
};