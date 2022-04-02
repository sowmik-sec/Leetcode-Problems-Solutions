class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int arr[100][100] = {0};
        int nn = indices.size();
        for(int i=0;i<nn;i++) {
            int temp = indices[i][0];
            int temp2 = indices[i][1];
            for(int j=0;j<n;j++) arr[temp][j]++;
            for(int j=0;j<m;j++) arr[j][temp2]++;
        }
        int ans = 0;
        for(int i=0;i<m;i++) {
            for(int j=0;j<n;j++) {
                if(arr[i][j]%2)++ans;
            }
        }
        return ans;
    }
};