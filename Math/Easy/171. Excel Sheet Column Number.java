class Solution {
    public int titleToNumber(String s) {
        int mul = 1;
        int total = 0;
        int n = s.length();
        for(int i=n-1;i>=0;i--) {
            total += (s.charAt(i)-'A'+1) * mul;
            mul *= 26;
        }
        return total;
    }
}