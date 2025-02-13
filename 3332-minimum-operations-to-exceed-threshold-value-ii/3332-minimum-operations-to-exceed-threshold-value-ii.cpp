class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        priority_queue<long, vector<long>,greater<long>>pq(begin(nums),end(nums));
       int count=0;
       while(!pq.empty() && pq.top()<k){
       long small=pq.top();
       pq.pop();
       long secondsmall=pq.top();
       pq.pop();
       pq.push(small*2+secondsmall);
       count++;
       }
       return count;
    }
};