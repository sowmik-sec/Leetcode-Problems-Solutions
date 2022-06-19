public class SudokuSolver {
    public static void main(String[] args) {
        char[][] board = {{'5','3','.','.','7','.','.','.','.'},
                            {'6','.','.','1','9','5','.','.','.'},
                            {'.','9','8','.','.','.','.','6','.'},
                            {'8','.','.','.','6','.','.','.','3'},
                            {'4','.','.','8','.','3','.','.','1'},
                            {'7','.','.','.','2','.','.','.','6'},
                            {'.','6','.','.','.','.','2','8','.'},
                            {'.','.','.','4','1','9','.','.','5'},
                            {'.','.','.','.','8','.','.','7','9'}};
        solve(board);
        display(board);
    }

    private static void display(char[][] board) {
        for(char[] num:board) {
            for(char n:num) {
                System.out.print(n + " ");
            }
            System.out.println();
        }
    }

    public static boolean solve(char[][] board) {
        int row=-1, col=-1;
        boolean findLeft = false;
        for(int i=0;i<9;i++) {
            for (int j = 0; j < 9; j++) {
                if(board[i][j]=='.') {
                    row = i; col = j;
                    findLeft = true;
                    break;
                }
            }
            if(findLeft) break;
        }
        if(!findLeft) return true;
        for (int number = 1; number <=9; number++) {
            if(isSafe(board,row,col,(char)(number+'0'))) {
                board[row][col] = (char) (number+'0');
                if(solve(board)) {
                    return true;
                }
                else board[row][col] = '.';
            }
        }
        return false;
    }

    private static boolean isSafe(char[][] board, int row, int col, char number) {
        // Check row
        for (int i = 0; i < 9; i++) {
            if(board[row][i]==number) return false;
        }

        // Check Column
        for(char num[]: board) {
            if(num[col]==number) return false;
        }

        // Check 3*3 grid

        int rowStart = row - row%3;
        int colStart = col - col%3;
        for (int i = rowStart; i < rowStart + 3; i++) {
            for (int j = colStart; j < colStart+3; j++) {
                if(board[i][j]==number) return false;
            }
        }
        return true;
    }
}
