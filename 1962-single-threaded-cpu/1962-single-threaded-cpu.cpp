class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        vector<int>answer;
        int n=tasks.size();
        for(int i=0; i<n; i++)
        tasks[i].push_back(i);
       sort(tasks.begin(),tasks.end());
        long long timer=tasks[0][0];
        int i=0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        while(!pq.empty()|| i<n)
        {
        while(i<n && timer>=tasks[i][0])
        {
            pq.push({tasks[i][1],tasks[i][2]});
            i++;
        }
        if(pq.empty())
        {
            timer=tasks[i][0];
        }
        else{
            answer.push_back(pq.top().second);
            timer+=pq.top().first;
            pq.pop();
        }
        }
        return answer;
    }
};