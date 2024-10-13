class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& mat, vector<int>& t) {
        int dist = abs(t[0])+abs(t[1]);
        for(auto x : mat)
        {
            int d = abs(t[0]-x[0])+abs(t[1]-x[1]);
            if(d<=dist) return false;
        }
        return true;

    }
};