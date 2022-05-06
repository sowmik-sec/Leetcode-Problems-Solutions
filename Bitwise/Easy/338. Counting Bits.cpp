class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);
        for(int i=0;i<=n;i++) {
            ans[i] = count_one(i);
        }
        return ans;
    }
    int count_one(int n){
        int cnt = 0;
        while(n>0) {
            if(n%2) cnt++;
            n/=2;
        }
        return cnt;
    }
};