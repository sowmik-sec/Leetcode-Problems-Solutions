import java.util.Scanner;

public class ProductOfTwoNumbers {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int x = in.nextInt();
        int y = in.nextInt();
        System.out.println(product(x,y));
    }

    private static int product(int a, int b) {
        if(b>a) return product(b,a);
        if(b!=0) return a+product(a,b-1);
        else return 0;
    }
}
