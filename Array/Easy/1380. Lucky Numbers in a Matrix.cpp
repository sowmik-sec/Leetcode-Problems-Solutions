class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0;i<matrix.size();i++) {
            int mn = INT_MAX,in;
            for(int j=0;j<matrix[i].size();j++) {
                if(matrix[i][j] < mn) {
                    mn = matrix[i][j];
                    in = j;
                }
            }
            bool ahs = true;
            for(int j = 0;j<matrix.size();j++) {
                if(matrix[j][in]>mn) {
                    ahs = false;
                    break;
                }
            }
            if(ahs)ans.push_back(mn);
        }
        return ans;
    }
};