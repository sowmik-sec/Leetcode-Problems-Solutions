class Solution {
public:
    bool isPowerOfTwo(int n) {
        int x = 0;
        while(true) {
            if(pow(2,x)>n) break;
            if(pow(2,x++)==n) return true;
        }
        return false;
    }
};