class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        vector<int> v(n);
        for(int i=0;i<n;i++) {
            for(int j=image[i].size()-1,k=0;j>=0;j--) {
                if(image[i][j]==0) v[k++] = 1;
                else v[k++] = 0;
            }
            for(int j=0;j<n;j++) image[i][j] = v[j];
        }
        return image;
    }
};