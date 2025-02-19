class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int answer=0;
        for(int i=0; i<n; i++){
            answer+=mat[i][i];
            answer+=mat[n-i-1][i];
        }
        if(n%2!=0){
            answer-=mat[n/2][n/2];
        }
        return answer;
    }
};