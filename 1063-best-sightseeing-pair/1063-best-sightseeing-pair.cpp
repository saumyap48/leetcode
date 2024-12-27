class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int n = values.size();
        int score=0, bestsightseeing=values[0];
        for(int j=1; j<n; j++){
            score=max(score,bestsightseeing+values[j]-j);
            bestsightseeing=max(bestsightseeing,values[j]+j);
        }
        return score;
    }
};
