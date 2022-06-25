public class NKnights {
    public static void main(String[] args) {
        int n = 2;
        boolean[][] board = new boolean[n][n];
        knight(board,0,0,n);
    }
    static int cnt = 0;

    private static void knight(boolean[][] board, int row, int col,int knights) {
        if(knights==0) {
            cnt++;
            System.out.println("board number: "+cnt);
            display(board);
            System.out.println();
            return;
        }
        if(row==board.length-1 && col==board.length) return;
        if(col==board.length){
            knight(board,row+1,0,knights);
            return;
        }
        if(isSafe(board,row,col)) {
            board[row][col] = true;
            knight(board,row,col+1,knights-1);
            board[row][col] = false;
        }
        knight(board,row,col+1,knights);
    }

    private static boolean isSafe(boolean[][] board, int row, int col) {
        if(isValid(board,row,col)==false) return false;
        if(isValid(board,row,col)) {
            if(isValid(board,row-2,col-1)) {
                if(board[row-2][col-1]) return false;
            }
        }
        if(isValid(board,row,col)) {
            if(isValid(board,row-1,col-2)) {
                if(board[row-1][col-2]) return false;
            }
        }
        if(isValid(board,row,col)) {
            if(isValid(board,row-2,col+1)) {
                if(board[row-2][col+1]) return false;
            }
        }
        if(isValid(board,row,col)) {
            if(isValid(board,row-1,col+2)) {
                if(board[row-1][col+2]) return false;
            }
        }
        return true;
    }

    private static boolean isValid(boolean[][] board, int row, int col) {
        int n = board.length;
        if(row>=0 && col>=0 && row<board.length && col<board.length) return true;
        return false;
    }

    private static void display(boolean[][] board) {
        for (int i = 0; i < board.length; i++) {
            for (int j = 0; j < board[0].length; j++) {
                if(board[i][j]) System.out.print("K");
                else System.out.print("X");
            }
            System.out.println();
        }
    }
}
