class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int>(n,0));
        int minr = 0, minc = 0;
        int maxr = n-1, maxc = n-1;
        int tel = n*n;
        int cnt = 1;
        while(cnt<=tel) {
            // Top Wall
            for(int i=minr, j = minc; j <= maxc && cnt<=tel; j++) {
                ans[i][j] = cnt++;
            }
            minr++;
            // Right Wall
            for(int i = minr, j = maxc; i<=maxr && cnt<=tel; i++) {
                ans[i][j] = cnt++;
            }
            maxc--;
            // Bottom Wall
            for(int i = maxr, j = maxc; j>=minc && cnt<=tel; j--) {
                ans[i][j] = cnt++;
            }
            maxr--;
            // Left Wall
            for(int i=maxr, j = minc; i>=minr && cnt<=tel; i--) {
                ans[i][j] = cnt++;
            }
            minc++;
        }
        return ans;
    }
};