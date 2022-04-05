class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> v;
        int m = matrix.size();
        int n = matrix[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(!matrix[i][j]) v.push_back({i,j});
            }
        }
        for(auto [x,y]:v) {
            for(int j = 0; j < n; j++) {
                matrix[x][j] = 0;
            }
            for(int j=0; j < m; j++) {
                matrix[j][y] = 0;
            }
        }
        
    }
};