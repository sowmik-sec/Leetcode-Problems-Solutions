import java.util.Scanner;

public class SumOfNaturalNumber {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println(rec_sum(n));
    }

    private static int rec_sum(int n) {
        if(n==0) return 0;
        return n+rec_sum(n-1);
    }
}
