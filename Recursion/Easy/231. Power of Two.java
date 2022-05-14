class Solution {
    public boolean isPowerOfTwo(int n) {
        if(check(n)==true) return true;
        return false;
    }
    static boolean check(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        return n%2==0 && check(n/2);
    }
}