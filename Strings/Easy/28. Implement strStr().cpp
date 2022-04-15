class Solution {
public:
    int strStr(string haystack, string needle) {
        if(haystack.size()==0 or needle.size()==0) return 0;
        for(int i=0;i<haystack.size();i++) {
            if(needle==haystack.substr(i,needle.size())) return i;
        }
        return -1;
    }
};