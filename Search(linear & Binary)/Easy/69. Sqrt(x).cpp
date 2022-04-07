class Solution {
public:
    int mySqrt(int x) {
        long long l = 1, h = x;
        h = (h/2)+2;
        while(l<=h) {
            long long mid = l + (h-l)/2;
            if(mid*mid==x) return mid;
            if(mid*mid>x) h = mid-1;
            else l = mid+1;
        }
        return h;
    }
};