class Solution {
public:
    bool isPalindrome(string s) {
        string ans = "";
        for(int i=0;i<s.size();i++) {
            if(s[i]>='A' and s[i]<='Z') ans += tolower(s[i]);
            else if(s[i]>='a' and s[i]<='z') ans += s[i];
            else if(s[i]>='0' and s[i]<='9') ans += s[i];
        }
        if(ans.size()<=1) return true;
        for(int i=0;i<ans.size()/2;i++) {
            if(ans[i]!=ans[ans.size()-i-1]) return false;
        }
        return true;
    }
};