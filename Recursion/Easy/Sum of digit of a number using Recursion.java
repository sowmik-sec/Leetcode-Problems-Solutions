import java.util.Scanner;

public class SumOfDigit {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println(sum_of_digit(n));
    }

    private static int sum_of_digit(int n) {
        if(n==0) return 0;
        return n%10+sum_of_digit(n/10);
    }
}