class Solution {
public:
    bool IsSafe(vector<vector<char>>& board, int row, int col, char digit) {

        // Horizontal
        for (int j = 0; j < 9; j++) {
            if (j != col && board[row][j] == digit) {
                return false;
            }
        }

        // Vertical
        for (int i = 0; i < 9; i++) {
            if (i != row && board[i][col] == digit) {
                return false;
            }
        }

        // 3x3 Grid
        int sr = (row / 3) * 3;
        int sc = (col / 3) * 3;

        for (int i = sr; i < sr + 3; i++) {
            for (int j = sc; j < sc + 3; j++) {
                if ((i != row || j != col) && board[i][j] == digit) {
                    return false;
                }
            }
        }

        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                if (board[i][j] != '.') {

                    if (!IsSafe(board, i, j, board[i][j])) {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};