import java.util.Scanner;

public class BalancedParenthesis {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String s = in.nextLine();
        System.out.println(balanced("",s));
    }

    private static boolean balanced(String p, String up) {
        if(p.isEmpty() && up.isEmpty()) return true;
        if(up.charAt(0)=='(' || up.charAt(0)=='{' || up.charAt(0)=='[') {
            return balanced(p+up.charAt(0),up.substring(1));
        }
        if((p.charAt(p.length()-1)=='(' && up.charAt(0)==')') || (p.charAt(p.length()-1)=='{' && up.charAt(0)=='}') || (p.charAt(p.length()-1)=='[' && up.charAt(0)==']')) {
            p = p.substring(0,p.length()-1);
            up = up.substring(1);
            return balanced(p,up);
        }
        else return false;
    }
}

/* [()]{}{[()()]()} -> True*/
/* [(]) -> False*/