class Solution {
public:
void func(vector<int>&v,int i,int sum,vector<int>&v2,vector<vector<int>>&answer){
    if(sum==0){
        answer.push_back(v2);
        return;
    }
    if(sum<0 ){
        return;
    }
    if(i<0){
        return;
    }
      v2.push_back(v[i]);
    func(v,i,sum-v[i],v2,answer);
      v2.pop_back();
    func(v,i-1,sum,v2,answer);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>>answer;
         vector<int>v;
         func(candidates,candidates.size()-1,target,v,answer);
         return answer;
  
    }
};