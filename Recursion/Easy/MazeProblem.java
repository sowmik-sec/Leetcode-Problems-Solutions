import java.util.ArrayList;
import java.util.Scanner;

public class Maze {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        //int r = in.nextInt();
        //int c = in.nextInt();
        //ArrayList<String> ans = print_path_with_diagonal("",r,c);
        //System.out.println(ans);
        boolean[][] maze = {
                {true, true, true},
                {true, false, true},
                {true, true, true}
        };
        ArrayList<String> ans = path_with_obstacles("",maze,0,0);
        System.out.println(ans);
    }

    private static ArrayList<String> path_with_obstacles(String p, boolean[][] maze, int r, int c) {
        ArrayList<String> list = new ArrayList<>();
        if(r==maze.length-1 && c==maze[0].length-1) {
            list.add(p);
            return list;
        }
        if(r<maze.length && c<maze[0].length && !maze[r][c]) {
            return list;
        }
        if(r<maze.length) list.addAll(path_with_obstacles(p+'D',maze,r+1,c));
        if(c<maze[0].length)list.addAll(path_with_obstacles(p+'R',maze,r,c+1));
        return list;
    }

    static ArrayList<String> print_path_with_diagonal(String p, int r, int c ) {
        ArrayList<String> list = new ArrayList<>();
        if(r==1 && c==1) {
            list.add(p);
            return list;
        }
        if(r>1 && c>1) list.addAll(print_path_with_diagonal(p+'D',r-1,c-1));
        if(r>1) list.addAll(print_path_with_diagonal(p+'V',r-1,c));
        if(c>1) list.addAll(print_path_with_diagonal(p+'D',r,c-1));
        return list;
    }
    static ArrayList<String> print_path(String p, int r, int c ) {
        ArrayList<String> list = new ArrayList<>();
        if(r==1 && c==1) {
            list.add(p);
            return list;
        }
        if(r>1) list.addAll(print_path(p+'D',r-1,c));
        if(c>1) list.addAll(print_path(p+'R',r,c-1));
        return list;
    }
}
