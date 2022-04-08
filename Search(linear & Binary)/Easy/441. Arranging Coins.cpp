class Solution {
public:
    int arrangeCoins(int n) {
        long long l = 1, h = n, mid, temp;
        while(l<=h) {
            mid = l + (h-l)/2;
            temp = (mid*(mid+1))/2;
            if(temp==n){
                return mid;
            }
            if(temp>n) h = mid - 1;
            else l = mid+1;
        }
        return h;
    }
};