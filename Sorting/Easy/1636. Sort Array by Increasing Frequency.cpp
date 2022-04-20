class Solution {
public:
    vector<int> frequencySort(vector<int>& A) {
        int n = A.size();
        unordered_map<int,int> m;
        for(int i=0;i<n;i++) m[A[i]]++;
        sort(A.begin(),A.end(),[&](int a,int b) {
            return m[a]==m[b]? a>b:m[a]<m[b];
        });
        return A;
    }
};