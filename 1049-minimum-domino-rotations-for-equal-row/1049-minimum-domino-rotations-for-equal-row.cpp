class Solution {
public:
   int checkCandidate(const vector<int>& tops, const vector<int>& bottoms, int candidate) {
        int rotationsTop = 0, rotationsBottom = 0;
        for (int i = 0; i < tops.size(); ++i) {
            if (tops[i] != candidate && bottoms[i] != candidate) {
                return -1;
            }
            if (tops[i] != candidate) {
                rotationsTop++;
            }
            if (bottoms[i] != candidate) {
                rotationsBottom++;
            }
        }
        return min(rotationsTop, rotationsBottom);
    }
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
        unordered_map<int, int> topFreq, bottomFreq;
        int maxTop = 0, maxBottom = 0;
        int topCandidate = -1, bottomCandidate = -1;
        for (int num : tops) {
            topFreq[num]++;
            if (topFreq[num] > maxTop) {
                maxTop = topFreq[num];
                topCandidate = num;
            }
        }
        for (int num : bottoms) {
            bottomFreq[num]++;
            if (bottomFreq[num] > maxBottom) {
                maxBottom = bottomFreq[num];
                bottomCandidate = num;
            }
        }
        int rotations = checkCandidate(tops, bottoms, topCandidate);
        if (rotations != -1) {
            return rotations;
        }
        rotations = checkCandidate(tops, bottoms, bottomCandidate);
        return rotations;
    }

};