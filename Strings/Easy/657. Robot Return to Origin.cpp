class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        int n = moves.size();
        for(int i=0;i<n;i++) {
            if(moves[i]=='L') --y;
            else if(moves[i]=='R')++y;
            else if(moves[i]=='U')++x;
            else --x;
        }
        if(x==0 and y==0) return true;
        return false;
    }
};