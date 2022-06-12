import java.util.Arrays;
import java.util.Scanner;

public class AllPath {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        boolean[][] maze = {
                {true, true, true},
                {true, true, true},
                {true, true, true}
        };
        //allpath("",maze,0,0);
        int[][] arr = new int[maze.length][maze[0].length];
        allPathPrint("",maze,0,0,arr,1);
    }

    private static void allPathPrint(String p, boolean[][] maze, int r, int c, int[][] arr, int step) {
        if(r==maze.length-1 && c == maze[0].length-1) {
            arr[r][c] = step;
            for(int[] a:arr) System.out.println(Arrays.toString(a));
            System.out.println(p);
            System.out.println();
            return;
        }
        if(!maze[r][c]) return;
        maze[r][c] = false;
        arr[r][c] = step;
        if(c>0) allPathPrint(p+'L',maze,r,c-1,arr,step+1);
        if(c<maze[0].length-1) allPathPrint(p+'R',maze,r,c+1,arr,step+1);
        if(r>0) allPathPrint(p+'U',maze,r-1,c,arr,step+1);
        if(r<maze.length-1) allPathPrint(p+'D',maze,r+1,c,arr,step+1);
        maze[r][c] = true;
        arr[r][c] = 0;
    }

    private static void allpath(String p, boolean[][] maze, int r, int c) {
        if(r==maze.length-1 && c==maze[0].length-1) {
            System.out.println(p);
            return;
        }
        if(!maze[r][c]) return;
        maze[r][c] = false;
        if(c>0) allpath(p+'L',maze,r,c-1);
        if(c<maze[0].length-1) allpath(p+'R',maze,r,c+1);
        if(r>0) allpath(p+'U',maze,r-1,c);
        if(r<maze.length-1) allpath(p+'D',maze,r+1,c);
        maze[r][c] = true;
    }
}
