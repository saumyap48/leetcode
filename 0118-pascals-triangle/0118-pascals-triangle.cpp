class Solution {
public:
    vector<vector<int>> generate(int n) {
     vector<vector<int>>answer(n);
     for(int i=0; i<n; i++){
         answer[i].assign(i+1,1);
         for(int j=1; j<i; j++){
            answer[i][j]=answer[i-1][j-1]+answer[i-1][j];
         }
     }
        return answer;
    }
};