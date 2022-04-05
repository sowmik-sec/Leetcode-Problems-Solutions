class Solution {
public:
    vector<vector<int>> spiralMatrixIII(int rows, int cols, int rStart, int cStart) {
        vector<vector<int>> ans;
        vector<vector<int>> dirs{{0,1},{1,0},{0,-1},{-1,0}};
        int dir_idx = 0;
        int total = rows*cols;
        int steps = 1;
        int increment = 1;
        ans.push_back({rStart, cStart});
        while(ans.size()<total) {
            for(int i=0;i<increment;i++) {
                rStart = rStart + dirs[dir_idx][0];
                cStart = cStart + dirs[dir_idx][1];
                if(rStart >=0 && rStart <rows && cStart >= 0 && cStart < cols) ans.push_back({rStart, cStart});
            }
            dir_idx = (dir_idx+1)%4;
            if(steps%2==0) increment++;
            steps++;
        }
        return ans;
    }
};