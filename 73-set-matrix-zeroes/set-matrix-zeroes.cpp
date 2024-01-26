class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int row_size = matrix.size();
        int col_size = matrix[0].size();
        vector<int> col(col_size, 0);
        vector<int> row(row_size, 0);
        for (int i = 0; i < row_size; i++) {
            for (int j = 0; j < col_size; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }
        for (int i = 0; i < row_size; i++) {
            for (int j = 0; j < col_size; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};