class Solution {
public:
    int maxDistance(vector<vector<int>>& arrays) {
        int minval=arrays[0][0];
        int maxval=arrays[0].back();
        int maxdistance=0;
        for(int i=1; i<arrays.size(); i++){
            maxdistance=max(maxdistance,max(abs(arrays[i].back()-minval),abs(maxval-arrays[i][0])));
            minval=min(minval,arrays[i][0]);
            maxval=max(maxval,arrays[i].back());
        }
    return maxdistance;
}
};