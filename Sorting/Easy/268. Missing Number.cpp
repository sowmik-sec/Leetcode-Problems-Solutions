class Solution {
public:
    int missingNumber(vector<int>& a) {
        unordered_map<int,int> m;
        int n = a.size();
        for(int i=0;i<n;i++) m[a[i]]++;
        for(int i=0;i<=n+1;i++) {
            if(!m[i]) return i;
        }
        return 0;
    }
};