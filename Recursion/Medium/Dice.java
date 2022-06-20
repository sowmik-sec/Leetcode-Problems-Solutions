import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Dice {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        List<ArrayList<Integer>> ans = dice(new ArrayList<>(),n,n);
        //System.out.println(ans);
    }

    private static List<ArrayList<Integer>> dice(ArrayList<Integer> p, int up,int target) {
        List<ArrayList<Integer>> list = new ArrayList<>();
        int sum = 0;
        for (int i = 0; i < p.size(); i++) {
            sum += p.get(i);
        }
        if(sum==target) {
            list.add(p);
            //System.out.println(list + " in sum");
            return list;
        }
        if(up==0) {
            //System.out.println(list + " in up");
            return list;
        }
        for (int i = 1; i <= up; i++) {
            p.add(i);
            System.out.println(p);
            list.addAll(dice(p,up-i, target));
            //System.out.println(list);
        }
        //System.out.println(list);
        return list;
    }
}
