class Solution {
public:
int numberOfBoomerangs(vector<vector<int>>& points) {
    int n = points.size();
    int result = 0;
    for (int i = 0; i < n; i++) {
        unordered_map<int, int> distanceCount;
        for (int j = 0; j < n; j++) {
            if (i != j) {
                int dx = points[i][0] - points[j][0];
                int dy = points[i][1] - points[j][1];
                int distSquared = dx * dx + dy * dy;
                distanceCount[distSquared]++;
            }
        }
        for (unordered_map<int, int>::iterator it = distanceCount.begin(); it != distanceCount.end(); ++it) {
            int count = it->second;
            if (count > 1) {
                result += count * (count - 1);
            }
        }
    }

    return result;
}
};