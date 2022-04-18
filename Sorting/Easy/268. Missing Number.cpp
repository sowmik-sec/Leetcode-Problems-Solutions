class Solution {
public:
    int missingNumber(vector<int>& a) {
        int res = a.size();
        for(int i=0;i<a.size();i++) {
            res^=i;
            res^=a[i];
        }
        return res;
    }
};