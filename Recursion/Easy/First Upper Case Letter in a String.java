import java.util.Scanner;

public class FirstUpperCaseLetter {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        char c = func(s);
        System.out.println(c);
    }

    private static char func(String s) {
        if(0==s.length()) {
            return '0';
        }
        if(s.charAt(0)>='A' && s.charAt(0)<='Z') return s.charAt(0);
        return func(s.substring(1));
    }
}
