class Solution {
public:
    int numberOfSteps(int num) {
        int ans = help(num,0);
        return ans;
    }
    int help(int n,int cnt) {
        if(n==0) return cnt;
        if(n%2==0) return help(n/2,cnt+1);
        else return help(n-1,cnt+1);
    }
};