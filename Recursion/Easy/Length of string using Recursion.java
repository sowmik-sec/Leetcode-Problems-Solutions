import java.util.Scanner;

public class LengthOfAString {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        System.out.println(func(s));
    }

    private static int func(String s) {
        if(s.isEmpty()) {
            return 0;
        }
        return 1+func(s.substring(1));
    }
}
