class Solution {
public:
    int lengthOfLastWord(string s) {
        string temp = "";
        int n = s.size();
        int ans = 0;
        for(int i = 0; i < n; i++) {
            if(s[i]==' ') {
                if(temp.size()) ans = temp.size();
                temp.clear();
            }
            else temp += s[i];
        }
        if(temp.size()) ans = temp.size();
        return ans;
    }
};