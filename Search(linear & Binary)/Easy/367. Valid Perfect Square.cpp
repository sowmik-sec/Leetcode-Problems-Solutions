class Solution {
public:
    bool isPerfectSquare(int num) {
        long long l = 1, h = num, ans, mid;
        while(l<=h) {
            mid = l + (h-l)/2;
            if(mid*mid==num) {
                ans = mid;
                break;
            }
            if(mid*mid>num) h = mid-1;
            else l = mid+1;
        }
        if(ans*ans==num) return true;
        else return false;
    }
};