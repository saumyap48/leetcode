class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        vector<vector<int>>answer;
priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<>> minHeap;
        int n=nums1.size();
        int m=nums2.size();
        for(int i=0; i<min(n,k); i++){
            minHeap.push({nums1[i]+nums2[0],{i,0}});
            }
        while (k-- >0 && !minHeap.empty()){
            auto toppair=minHeap.top();
            minHeap.pop();
             int i = toppair.second.first;
            int j = toppair.second.second;
            answer.push_back({nums1[i], nums2[j]});
        if(j+1<m){
            minHeap.push({nums1[i]+nums2[j+1],{i,j+1}});
        }
        }
        return answer;
    }
};