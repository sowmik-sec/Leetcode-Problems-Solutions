class Solution {
    public int numberOfSteps(int num) {
        int ans = func(num);
        return ans;
    }
    static int func(int n) {
        if(n==0) return 0;
        if(n%2==0) return 1+func(n/2);
        else return 1+func(n-1);
    }
}