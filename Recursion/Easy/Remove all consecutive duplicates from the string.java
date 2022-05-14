import java.util.Scanner;

public class RemoveConsecutiveDuplicates {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        System.out.println(ans(s));
    }

    private static String ans(String s) {
        if(s.length()==1) return s;
        if(s.length()>1 && s.charAt(0)==s.charAt(1)) return ans(s.substring(1));
        else return s.charAt(0) + ans(s.substring(1));
    }
}
