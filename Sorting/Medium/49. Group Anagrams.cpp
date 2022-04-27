class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        unordered_map<string,vector<string>> m;
        int n = s.size();
        for(int i=0;i<n;i++) {
            string st = s[i];
            sort(st.begin(),st.end());
            m[st].push_back(s[i]);
        }
        vector<vector<string>> ans;
        for(auto [x,y]:m) {
            ans.push_back(y);
        }
        return ans;
    }
};