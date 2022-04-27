class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& s) {
        map<string,vector<string>> m;
        int n = s.size();
        for(int i=0;i<n;i++) {
            string st = s[i];
            sort(st.begin(),st.end());
            m[st].push_back(s[i]);
        }
        vector<vector<string>> ans;
        for(auto [x,y]:m) {
            vector<string> vv;
            for(int i=0;i<y.size();i++) {
                vv.push_back(y[i]);
            }
            ans.push_back(vv);
        }
        return ans;
    }
};