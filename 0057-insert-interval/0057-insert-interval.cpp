class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>>answer;
        int i=0,n=intervals.size();
        while(i<n && newInterval[0]>intervals[i][1]){
            answer.push_back(intervals[i]);
            i++;
        }
        if(i==n){
            answer.push_back(newInterval);
            return answer;
        }
        while(i<n&& newInterval[1]>=intervals[i][0]){
            newInterval[0]=min(newInterval[0],intervals[i][0]);
            newInterval[1]=max(newInterval[1],intervals[i][1]);
            i++;
        }
        answer.push_back(newInterval);
        while(i<n){
            answer.push_back(intervals[i]);
            i++;
        }
        return answer;
    }
};