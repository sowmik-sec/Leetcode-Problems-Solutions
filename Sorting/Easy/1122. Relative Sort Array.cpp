class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n = arr1.size(), m = arr2.size();
        map<int,int> mp;
        vector<int> ans;
        for(int i=0;i<n;i++) mp[arr1[i]]++;
        for(int i = 0;i<m;i++) {
            for(int j = 0;j<mp[arr2[i]];j++) {
                ans.push_back(arr2[i]);
            }
            mp.erase(arr2[i]);
        }
        for(auto [x,y]:mp) {
            for(int j=0;j<y;j++) ans.push_back(x);
        }
        return ans;
    }
};