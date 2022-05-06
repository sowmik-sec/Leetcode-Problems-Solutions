class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int cnt = 0;
        for(int i = left; i <= right; i++) {
            int temp = __builtin_popcount(i);
            if(is_prime(temp)) ++cnt;
        }
        return cnt;
    }
    bool is_prime(int n) {
        if(n==1) return false;
        vector<bool> ck(n+1,true);
        for(int i=2;i*i<=n;i++) {
            if(ck[i]) {
                for(int j=i*i;j<=n;j+=i) {
                    ck[j] = false;
                }
            }
        }
        return ck[n]==true;
    }
};