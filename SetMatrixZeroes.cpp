#include <vector>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        bool column0 = false; // To track if the first column needs to be zeroed

        // First pass: mark the rows and columns that need to be zeroed
        for (int i = 0; i < n; i++) {
            if (matrix[i][0] == 0) {
                column0 = true; // Mark that the first column needs to be zeroed
            }
            for (int j = 1; j < m; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; // Mark the first column for this row
                    matrix[0][j] = 0; // Mark the first row for this column
                }
            }
        }

        // Second pass: use the marks to set elements to zero
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }

        // Finally, handle the first row
        if (matrix[0][0] == 0) {
            for (int j = 0; j < m; j++) {
                matrix[0][j] = 0;
            }
        }

        // Handle the first column
        if (column0) {
            for (int i = 0; i < n; i++) {
                matrix[i][0] = 0;
            }
        }
    }
};