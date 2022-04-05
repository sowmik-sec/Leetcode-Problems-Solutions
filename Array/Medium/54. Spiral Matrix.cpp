class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int n = matrix.size();
        int m = matrix[0].size();
        int minr=0,minc=0;
        int maxr = n-1, maxc = m-1;
        int cnt = 0;
        int tel = n*m;
        while(cnt < tel) {
            // Top Wall
            for(int i = minr, j = minc; j<=maxc && cnt <tel; j++) {
                ans.push_back(matrix[i][j]);
                cnt++;
            }
            minr++;
            // Right Wall
            for(int i = minr, j = maxc; i <= maxr && cnt < tel; i++) {
                ans.push_back(matrix[i][j]);
                cnt++;
            }
            maxc--;
            // Bottom Wall
            for(int i=maxr, j = maxc; j>=minc && cnt < tel; j--) {
                ans.push_back(matrix[i][j]);
                cnt++;
            }
            maxr--;
            //Left Wall
            for(int i=maxr, j = minc; i>=minr && cnt <tel; i--) {
                ans.push_back(matrix[i][j]);
                cnt++;
            }
            minc++;
        }
        return ans;
    }
};