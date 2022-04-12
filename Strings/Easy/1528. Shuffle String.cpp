class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int n = indices.size();
        vector<char> str(n);
        for(int i=0;i<n;i++) str[indices[i]] = s[i];
        string ans(str.begin(),str.end());
        return ans;
    }
};