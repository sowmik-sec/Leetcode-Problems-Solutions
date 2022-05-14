class Solution {
    public boolean isPowerOfThree(int n) {
        if(check(n)) return true;
        return false;
    }
    static boolean check(int n) {
        if(n<=0) return false;
        if(n==1) return true;
        return n%3==0 && check(n/3);
    }
}