class Solution {
public:
static bool com(const vector<int>& a, const vector<int>& b) {
        if (a[0] == b[0])
            return a[1] > b[1];
        return a[0] < b[0];
    }
    int removeCoveredIntervals(vector<vector<int>>& box) {
        sort(box.begin(), box.end(), com);
        int count = 0; 
        int j = 0;      
        for (int i = 1; i < box.size(); ++i) {
            if (box[j][0] <= box[i][0] && box[j][1] >= box[i][1]) {
                continue;
            } else {
                count++;
                j=i;
            }
        }
        return count+1 ;
    }
};