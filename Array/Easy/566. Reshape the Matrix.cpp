class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int m = mat.size();
        int n = mat[0].size(),k=0;
        if(m*n != r*c) return mat;
        vector<int> v;
        vector<vector<int>> ans;
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++) v.push_back(mat[i][j]);
        }
        for(int i=0;i<r;i++){
            vector<int> aaa;
            for(int j=0;j<c;j++) {
                aaa.push_back(v[k++]);
            }
            ans.push_back(aaa);
        }
        return ans;
    }
};