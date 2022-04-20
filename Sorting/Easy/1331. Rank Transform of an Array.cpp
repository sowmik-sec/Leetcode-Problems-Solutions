class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans(n), a = arr;
        sort(a.begin(),a.end());
        map<int,int> m;
        int cnt = 1;
        for(int i=0;i<n;i++) {
            if(!m[a[i]]) {
                m[a[i]] = cnt++;
            }
        }
        for(int i=0;i<n;i++) {
            ans[i] = m[arr[i]];
        }
        return ans;
    }
};