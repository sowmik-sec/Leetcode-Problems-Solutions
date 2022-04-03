class Solution {
public:
    void transpose(vector<vector<int>> &matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++) {
            for(int j=i+1;j<n;j++) {
                if(i!=j) swap(matrix[i][j],matrix[j][i]);
            }
        }
    }
    
    void reverse(vector<vector<int>> &matrix) {
        int n = matrix.size();
        for(int i=0;i<n;i++) {
            int h = 0;
            int l = n-1;
            while(h<=l) {
                swap(matrix[i][h++],matrix[i][l--]);
            }
        }
    }
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = target.size();
        if(mat==target) return true;
        for(int i=0;i<4;i++) {
            //First Transpose 
            //Second Reverse
            transpose(mat);
            reverse(mat);
            
            //Check if the matrix is dqual to the target
            if(mat==target) return true;
        }
        return false;
    }
};