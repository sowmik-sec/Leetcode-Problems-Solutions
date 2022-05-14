import java.util.Scanner;

public class SortedOrNot {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        System.out.println(is_sorted(a,0));
    }

    private static boolean is_sorted(int[] a, int i) {
        if(i==a.length-1) return true;
        if(a[i]>a[i+1]) return false;
        return is_sorted(a,i+1);
    }
}
