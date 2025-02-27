class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         int n=nums.size();
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>>frequent;
        for(auto it: mp){
            frequent.push({it.second,it.first});
        }
        vector<int>answer;
        for(int i=0; i<k; i++){
            answer.push_back(frequent.top().second);
            frequent.pop();
        }
        return answer;
    }
};