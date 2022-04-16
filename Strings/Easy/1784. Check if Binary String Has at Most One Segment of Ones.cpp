class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        bool one = false, zero = false;
        for(int i=0;i<n;i++) {
            if(s[i]=='1' and !one) {
                one = true;
            }
            else if(s[i]=='0' and !zero) {
                zero = true;
            }
            else if(s[i]=='1' and zero) return false;
        }
        return true;
    }
};