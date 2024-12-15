class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& events) {
        int max_diff=events[0][1];
        int output=events[0][0];
        for(int i=1; i<events.size(); i++){
        int time_diff=events[i][1]-events[i-1][1];
        if(time_diff>max_diff){
            max_diff=time_diff;
            output=events[i][0];
        }else if(time_diff==max_diff){
            output=min(output,events[i][0]);
        }
        }
        return output;
    }
};