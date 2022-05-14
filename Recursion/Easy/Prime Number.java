import java.util.Scanner;

public class PrimeNumber {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        System.out.println(prime(n,2,(int)Math.sqrt(n)));
    }

    private static boolean prime(int n, int i, int sq) {
        if(i>sq) return true;
        if(n%i==0) return false;
        return prime(n,i+1,sq);
    }
}
