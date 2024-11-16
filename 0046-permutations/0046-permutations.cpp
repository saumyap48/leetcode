class Solution{
    public:
void permu(vector<int>& nums, vector<vector<int>>& ans, vector<int>&temp,vector<bool>&visited){
    if (visited.size() == temp.size()) {
        ans.push_back(temp);
        return;
    }
    for (int i =0; i < visited.size(); i++) {
       if(visited[i]==0){
        visited[i]=1;
        temp.push_back(nums[i]);
        permu(nums,ans,temp,visited);
        visited[i]=0;
        temp.pop_back();
       }
    }
}

vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> ans;
  vector<int>temp;
  vector<bool>visited(nums.size(),0);
  permu(nums,ans,temp,visited);
  return ans;
}
};
