class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> s;
        for(int i:nums){
            if(s.find(i)==s.end())
                s.insert(i);
                else 
                s.erase(i);
            }
            vector<int>ans;
            for(int it: s){
                ans.push_back(it);
            }
            return ans;
    }
};