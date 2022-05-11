class Solution {
    public int fib(int n) {
        int ans = f(n);
        return ans;
    }
    public static int f(int n) {
        if(n<2) return n;
        return f(n-1) + f(n-2);
    }
}