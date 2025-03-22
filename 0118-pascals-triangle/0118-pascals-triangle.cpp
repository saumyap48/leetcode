class Solution {
public:
    vector<int> generatedRow(int row) {
        long long answer = 1;
        vector<int> answerRow;
        answerRow.push_back(1);
        
        for (int col = 1; col < row; col++) {
            answer = answer * (row - col);
            answer = answer / col;
            answerRow.push_back(answer);
        }
        return answerRow;
    }

    vector<vector<int>> generate(int n) {
        vector<vector<int>> pascalTriangle;
        for (int row = 1; row <= n; row++) {
            pascalTriangle.push_back(generatedRow(row));
        }
        return pascalTriangle;
    }
};