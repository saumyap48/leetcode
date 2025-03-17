class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int coloumn=matrix[0].size();
         vector<vector<int>> matr(coloumn, vector<int>(row));
        for(int i=0; i<row; i++){
            for(int j=0; j<coloumn; j++){
                  matr[j][i]=matrix[i][j];
            }
        }
        return matr;
    }
};