class Solution {
public:
    bool isHappy(int n) {
        long long slow = mul(n), fast = mul(mul(n));
        while(slow!=fast) {
            slow = mul(slow);
            fast = mul(mul(fast));
        }
        return fast==1;
    }
    long long mul(long long n) {
        long long ans = 0;
        while(n>0) {
            ans += pow(n%10,2);
            n/=10;
        }
        return ans;
    }
};