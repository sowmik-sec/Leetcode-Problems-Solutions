import java.util.Scanner;

public class MaxAndMin {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++) {
            a[i] = in.nextInt();
        }
        func(a,0,Integer.MAX_VALUE,Integer.MIN_VALUE);
    }

    private static void func(int[] a,int i, int min, int max) {
        if(i==a.length) {
            System.out.println("Max = "+max+", Min = "+min);
            return;
        }
        func(a,i+1,Math.min(min,a[i]),Math.max(max,a[i]));
    }
}