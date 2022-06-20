package kunal.recursion.backtracking;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Dice {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = 4;
        int k = 6;
        //List<String> ans = dice("",n);
        //System.out.println(ans);
        List<String> df = diceFace("",n,k);
    }

    private static List<String> dice(String p, int up) {
        List<String> list = new ArrayList<>();
        if(up==0) {
            list.add(p);
            return list;
        }

        for (int i = 1; i <= up && i<=6; i++) {
            list.addAll (dice(p+i,up-i));
            //System.out.println(list);
        }
        //System.out.println(list);
        return list;
    }
    private static List<String> diceFace(String p, int up, int face) {
        List<String> list = new ArrayList<>();
        if(up==0) {
            list.add(p);
            return list;
        }

        for (int i = 1; i <= up && i<=face; i++) {
            list.addAll (diceFace(p+i,up-i,face));
            //System.out.println(list);
        }
        //System.out.println(list);
        return list;
    }
}
