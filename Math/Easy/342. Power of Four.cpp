class Solution {
public:
    bool isPowerOfFour(int n) {
        int x = 0;
        while(true) {
            if(pow(4,x)>n) break;
            if(pow(4,x)==n) return true;
            x++;
        }
        return false;
    }
};